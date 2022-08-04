/**
 * File:   fscript_lua.h
 * Author: AWTK Develop Team
 * Brief:  run fscript with lua
 *
 * Copyright (c) 2020 - 2022  Guangzhou ZHIYUAN Electronics Co.,Ltd.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * License file for more details.
 *
 */

/**
 * History:
 * ================================================================
 * 2022-08-01 Li XianJing <xianjimli@hotmail.com> created
 *
 */

#include "../lua/lua.h"
#include "../lua/lauxlib.h"
#include "../lua/lualib.h"
#include "../lua/lstate.h"

#include "tkc/fscript.h"
#include "tkc/object_default.h"

#include "fscript_lua.h"

static ret_t str_append_indent_ex(str_t* str, uint32_t level, const char* prefx,
                                  const char* appendix) {
  if (prefx != NULL) {
    str_append(str, prefx);
  }
  str_append_n_chars(str, ' ', level * 2);
  if (appendix != NULL) {
    str_append(str, appendix);
  }
  return RET_OK;
}

static ret_t str_append_indent(str_t* str, uint32_t level) {
  return str_append_n_chars(str, ' ', level * 2);
}

static ret_t fscript_call_to_lua(fscript_func_call_t* call, str_t* str, uint32_t level);

static ret_t fscript_arg_to_lua_ex(value_t* v, str_t* str, uint32_t level, uint32_t index,
                                   const char* func_name, bool_t is_statememnt) {
  char buff[64] = {0};
  switch (v->type) {
    case VALUE_TYPE_FSCRIPT_ID: {
      const char* id = value_id(v);
      if (tk_str_eq(id, "continue") || tk_str_eq(id, "break") || tk_str_eq(id, "return")) {
        str_append(str, id);
      } else {
        if (!tk_str_eq(func_name, "set_local") && v->value.id.index < 0) {
          if (!tk_str_start_with(id, FSCRIPT_STR_GLOBAL_PREFIX)) {
            str_append(str, "obj.");
          }
        }
        str_append(str, id);
      }
      break;
    }
    case VALUE_TYPE_FSCRIPT_FUNC: {
      fscript_call_to_lua(value_func(v), str, level);
      break;
    }
    case VALUE_TYPE_INT8:
    case VALUE_TYPE_UINT8:
    case VALUE_TYPE_INT16:
    case VALUE_TYPE_UINT16:
    case VALUE_TYPE_INT32:
    case VALUE_TYPE_UINT32:
    case VALUE_TYPE_INT64:
    case VALUE_TYPE_UINT64:
    case VALUE_TYPE_FLOAT:
    case VALUE_TYPE_FLOAT32:
    case VALUE_TYPE_BOOL:
    case VALUE_TYPE_DOUBLE: {
      if (is_statememnt) {
        log_debug("skip unused number\n");
      } else {
        str_append(str, value_str_ex(v, buff, sizeof(buff)));
      }
      break;
    }
    case VALUE_TYPE_STRING: {
      const char* s = value_str(v);
      if (is_statememnt) {
        log_debug("skip unused string\n");
      } else if (s != NULL) {
        if (strchr(s, '\n') != NULL || strchr(s, '\n') != NULL) {
          str_append_more(str, "[[", s, "]]", NULL);
        } else {
          str_append_json_str(str, s);
        }
      } else {
        str_append(str, "nil");
      }
      break;
    }
    default:
      break;
  }

  return RET_OK;
}

static ret_t fscript_arg_to_lua(value_t* v, str_t* str, uint32_t level) {
  return fscript_arg_to_lua_ex(v, str, level, 0, NULL, FALSE);
}

static bool_t value_is_expr(value_t* v) {
  if (v->type == VALUE_TYPE_FSCRIPT_FUNC) {
    fscript_func_call_t* iter = value_func(v);
    const char* name = (char*)(iter) + sizeof(fscript_func_call_t);
    return tk_str_eq(name, "expr");
  }

  return FALSE;
}

static ret_t fscript_statments_to_lua(fscript_func_call_t* call, str_t* str, uint32_t start,
                                      uint32_t level) {
  uint32_t i = 0;
  for (i = start; i < call->args.size; i++) {
    value_t* v = call->args.args + i;
    if (!value_is_expr(v)) {
      str_append_indent(str, level);
    }

    fscript_arg_to_lua_ex(v, str, level, 0, NULL, TRUE);
    if (str->str[str->size - 1] != '\n') {
      str_append(str, "\n");
    }
  }

  return RET_OK;
}

static ret_t fscript_args_to_lua(fscript_func_call_t* call, str_t* str, const char* func_name) {
  uint32_t i = 0;

  for (i = 0; i < call->args.size; i++) {
    value_t* v = call->args.args + i;
    if (i > 0) {
      str_append(str, ",");
    }
    fscript_arg_to_lua_ex(v, str, 0, i, func_name, FALSE);
  }

  return RET_OK;
}

static ret_t fscript_call_to_lua_expr(fscript_func_call_t* call, str_t* str, uint32_t level) {
  return fscript_statments_to_lua(call, str, 0, level + 1);
}

static ret_t fscript_call_to_lua_default(fscript_func_call_t* call, str_t* str, const char* name) {
  if (tk_str_eq(name, "return")) {
    str_append_more(str, name, " ", NULL);
    fscript_args_to_lua(call, str, name);
  } else {
    str_append_more(str, name, "(", NULL);
    fscript_args_to_lua(call, str, name);
    str_append(str, ")");
  }

  return RET_OK;
}

static ret_t fscript_2ops_to_lua(const char* name, const char* new_name, value_t* v0, value_t* v1,
                                 str_t* str, bool_t group) {
  if (group) {
    str_append(str, "(");
  }
  fscript_arg_to_lua_ex(v0, str, 0, 0, name, FALSE);
  str_append(str, " ");
  str_append(str, new_name);
  str_append(str, " ");
  fscript_arg_to_lua_ex(v1, str, 0, 1, name, FALSE);
  if (group) {
    str_append(str, ")");
  }
  return RET_OK;
}

static ret_t fscript_1ops_to_lua(const char* name, value_t* v0, str_t* str, bool_t group) {
  if (group) {
    str_append(str, "(");
  }
  str_append_more(str, name, " ", NULL);
  fscript_arg_to_lua(v0, str, 0);
  if (group) {
    str_append(str, ")");
  }
  return RET_OK;
}

static const char* s_2ops[] = {"+", "-",  "=",  "*", "/",  "||", "&&",
                               "<", "<=", "==", ">", ">=", "!=", "%"};
static const char* s_2ops_to[] = {"+", "-",  "=",  "*", "/",  "or", "and",
                                  "<", "<=", "==", ">", ">=", "~=", "%"};

static const char* map_to(const char* name, const char** from, const char** to, uint32_t size) {
  uint32_t i = 0;
  for (i = 0; i < size; i++) {
    if (tk_str_eq(name, from[i])) {
      return to[i];
    }
  }

  return NULL;
}

static ret_t fscript_call_to_lua_if(fscript_func_call_t* call, str_t* str, uint32_t level) {
  uint32_t i = 0;
  uint32_t n = call->args.size / 2;
  bool_t has_else = (call->args.size % 2) == 1;

  str_append(str, "\n");
  for (i = 0; i < n; i++) {
    value_t* cond = call->args.args + i * 2;
    value_t* block = call->args.args + i * 2 + 1;

    str_append_indent(str, level);
    if (i > 0) {
      str_append(str, "else");
    }
    str_append(str, "if ");
    fscript_arg_to_lua(cond, str, 0);
    str_append(str, "\n");
    str_append_indent(str, level);
    str_append(str, "then\n");
    fscript_arg_to_lua(block, str, level);
  }

  if (has_else) {
    str_append_indent(str, level);
    str_append(str, "else \n");
    fscript_arg_to_lua(call->args.args + 2 * n, str, level);
  }
  str_append_indent(str, level);
  str_append(str, "end\n");

  return RET_OK;
}

static ret_t fscript_call_to_lua_while(fscript_func_call_t* call, str_t* str, uint32_t level) {
  str_append(str, "\n");
  str_append_indent(str, level);
  str_append(str, "while ");
  fscript_arg_to_lua(call->args.args, str, 0);

  str_append(str, "\n");
  str_append_indent(str, level);
  str_append(str, "do\n");
  fscript_arg_to_lua(call->args.args + 1, str, level);
  str_append_indent(str, level);
  str_append(str, "end\n");
  return RET_OK;
}

static ret_t fscript_call_to_lua_until(fscript_func_call_t* call, str_t* str, uint32_t level) {
  str_append(str, "\n");
  str_append_indent(str, level);
  str_append(str, "while(not (");
  fscript_arg_to_lua(call->args.args, str, 0);

  str_append(str, "))\n");
  str_append_indent(str, level);
  str_append(str, "do\n");
  fscript_arg_to_lua(call->args.args + 1, str, level);
  str_append_indent(str, level);
  str_append(str, "end\n");
  return RET_OK;
}

static ret_t fscript_call_to_lua_for(fscript_func_call_t* call, str_t* str, uint32_t level) {
  str_append_indent_ex(str, level, "\n", NULL);
  fscript_arg_to_lua(call->args.args, str, level);

  str_append_indent_ex(str, level, "\n", "while");
  fscript_arg_to_lua(call->args.args + 1, str, 0);

  str_append_indent_ex(str, level, "\n", "do\n");
  fscript_arg_to_lua(call->args.args + 3, str, level);

  fscript_arg_to_lua(call->args.args + 2, str, level);
  str_append_indent_ex(str, level, "\n", "end\n");

  return RET_OK;
}

static ret_t fscript_call_to_lua_for_in(fscript_func_call_t* call, str_t* str, uint32_t level) {
  char index[TK_NAME_LEN + 1];
  const char* iter = value_id(call->args.args);
  const char* arr = value_id(call->args.args + 1);
  tk_snprintf(index, sizeof(index) - 1, "ii_%u", level);

  str_append_indent_ex(str, level, "\n", NULL);
  str_append_more(str, "local ", index, "=0", NULL);

  str_append_indent_ex(str, level, "\n", "while(");
  str_append_more(str, index, "<", arr, ".size)", NULL);
  str_append_indent_ex(str, level, "\n", "do\n");
  str_append_indent_ex(str, level + 1, NULL, NULL);
  str_append_more(str, iter, "=array_get(", arr, ",", index, ")\n", NULL);

  fscript_arg_to_lua(call->args.args + 2, str, level);

  str_append_indent_ex(str, level + 1, NULL, NULL);
  str_append_more(str, index, "=", index, "+1", NULL);
  str_append_indent_ex(str, level, "\n", "end\n");

  return RET_OK;
}

static ret_t fscript_call_to_lua_repeat_times(fscript_func_call_t* call, str_t* str,
                                              uint32_t level) {
  char iter_name[TK_NAME_LEN + 1] = {0};
  tk_snprintf(iter_name, sizeof(iter_name) - 1, "iter_%u", level);

  str_append(str, "\n");
  str_append_indent(str, level);
  str_append_more(str, "local ", iter_name, "= 0;\n", NULL);

  str_append_indent(str, level);
  str_append_more(str, "while(", iter_name, "<", NULL);
  fscript_arg_to_lua(call->args.args, str, 0);
  str_append(str, ")\n");

  str_append_indent(str, level);
  str_append(str, "do\n");
  fscript_statments_to_lua(call, str, 1, level);
  str_append_indent(str, level + 1);
  str_append_more(str, iter_name, "=", iter_name, "+1\n", NULL);
  str_append_indent(str, level);
  str_append(str, "end\n");

  return RET_OK;
}

static ret_t fscript_call_to_lua_repeat(fscript_func_call_t* call, str_t* str, uint32_t level) {
  char iter_name[2 * TK_NAME_LEN + 1] = {0};
  const char* name = value_id(call->args.args);
  bool_t is_local = call->args.args->value.id.index >= 0;

  if (is_local) {
    tk_strncpy_s(iter_name, sizeof(iter_name) - 1, name, strlen(name));
  } else {
    tk_snprintf(iter_name, sizeof(iter_name) - 1, "obj.%s", name);
  }

  str_append(str, "\n");
  str_append_indent(str, level);
  str_append_more(str, iter_name, "=", NULL);
  fscript_arg_to_lua(call->args.args + 1, str, 0);
  str_append(str, "\n");

  str_append_indent(str, level);
  str_append_more(str, "while(", iter_name, "<", NULL);
  fscript_arg_to_lua(call->args.args + 2, str, 0);
  str_append(str, ")\n");
  str_append_indent(str, level);
  str_append(str, "do\n");
  fscript_arg_to_lua(call->args.args + 4, str, level);
  str_append_indent(str, level + 1);
  str_append_more(str, iter_name, "=", iter_name, "+", NULL);
  fscript_arg_to_lua(call->args.args + 3, str, 0);
  str_append(str, "\n");
  str_append_indent(str, level);
  str_append(str, "end\n");

  return RET_OK;
}

static ret_t fscript_call_to_lua(fscript_func_call_t* call, str_t* str, uint32_t level) {
  const char* name = (char*)(call) + sizeof(fscript_func_call_t);
  const char* new_name = NULL;

  new_name = map_to(name, s_2ops, s_2ops_to, ARRAY_SIZE(s_2ops));
  if (new_name != NULL) {
    bool_t group = !tk_str_eq(new_name, "=");
    return fscript_2ops_to_lua(name, new_name, call->args.args, call->args.args + 1, str, group);
  }

  if (tk_str_eq(name, "if")) {
    return fscript_call_to_lua_if(call, str, level);
  }

  if (tk_str_eq(name, "for")) {
    return fscript_call_to_lua_for(call, str, level);
  }

  if (tk_str_eq(name, "for_in")) {
    return fscript_call_to_lua_for_in(call, str, level);
  }

  if (tk_str_eq(name, "while")) {
    return fscript_call_to_lua_while(call, str, level);
  }

  if (tk_str_eq(name, "until")) {
    return fscript_call_to_lua_until(call, str, level);
  }

  if (tk_str_eq(name, "repeat_times")) {
    return fscript_call_to_lua_repeat_times(call, str, level);
  }

  if (tk_str_eq(name, "repeat")) {
    return fscript_call_to_lua_repeat(call, str, level);
  }

  if (tk_str_eq(name, "set_local")) {
    str_append(str, "local ");
    return fscript_2ops_to_lua(name, "=", call->args.args, call->args.args + 1, str, FALSE);
  }

  if (tk_str_eq(name, "expr")) {
    return fscript_call_to_lua_expr(call, str, level);
  }

  if (tk_str_eq(name, "unset") || tk_str_eq(name, "set")) {
    str_append_more(str, name, "(\"", value_id(call->args.args), "\")", NULL);
    return RET_OK;
  }

  if (tk_str_eq(name, "!")) {
    return fscript_call_to_lua_default(call, str, "logic_not");
  }

  if (tk_str_eq(name, "<<")) {
    return fscript_call_to_lua_default(call, str, "lshift");
  }
  if (tk_str_eq(name, ">>")) {
    return fscript_call_to_lua_default(call, str, "rshift");
  }
  if (tk_str_eq(name, "&")) {
    return fscript_call_to_lua_default(call, str, "bit_and");
  }
  if (tk_str_eq(name, "|")) {
    return fscript_call_to_lua_default(call, str, "bit_or");
  }
  if (tk_str_eq(name, "^")) {
    return fscript_call_to_lua_default(call, str, "bit_nor");
  }
  if (tk_str_eq(name, "~")) {
    return fscript_call_to_lua_default(call, str, "bit_not");
  }

  return fscript_call_to_lua_default(call, str, name);
}

static ret_t fscript_func_to_lua(void* ctx, const void* data) {
  uint32_t i = 0;
  str_t* str = (str_t*)ctx;
  named_value_t* iter = (named_value_t*)(data);
  fscript_function_def_t* func = value_func_def(&(iter->value));
  str_append_more(str, "function ", func->name, "(", NULL);
  for (i = 0; i < func->params.size; i++) {
    const char* iter = (const char*)darray_get(&(func->params), i);
    if (i > 0) {
      str_append(str, ", ");
    }
    str_append(str, iter);
  }
  str_append(str, ")\n");
  fscript_statments_to_lua(func->body, str, 0, 1);
  str_append(str, "end\n");

  return RET_OK;
}

ret_t fscript_to_lua(fscript_t* fscript, str_t* str) {
  fscript_func_call_t* call = NULL;
  return_value_if_fail(fscript != NULL && fscript->first != NULL && str != NULL, RET_OK);
  if (fscript->funcs_def != NULL) {
    tk_object_foreach_prop(fscript->funcs_def, fscript_func_to_lua, str);
  }

  call = fscript->first;
  fscript_statments_to_lua(call, str, 0, 0);

  return RET_OK;
}

/************************************/

#define FSCRIPT_OBJECT_T "fscript_object_t"

/*functions to access fscript->obj*/
static ret_t fscript_return_to_lua(lua_State* L, value_t* v);
static ret_t tvalue_to_value(lua_State* L, int32_t i, value_t* v);

static int fscript_object_set_prop(lua_State* L) {
  value_t v;
  tk_object_t* obj = *(tk_object_t**)lua_touserdata(L, 1);
  const char* name = (const char*)luaL_checkstring(L, 2);

  value_set_int(&v, 0);
  tvalue_to_value(L, 3, &v);
  tk_object_set_prop(obj, name, &v);

  return 0;
}

static int fscript_object_get_prop(lua_State* L) {
  value_t v;
  tk_object_t* obj = *(tk_object_t**)lua_touserdata(L, 1);
  const char* name = (const char*)luaL_checkstring(L, 2);

  value_set_int(&v, 0);
  tk_object_get_prop(obj, name, &v);

  fscript_return_to_lua(L, &v);

  return 1;
}

static int fscript_object_close(lua_State* L) {
  tk_object_t* obj = *(tk_object_t**)lua_touserdata(L, 1);
  (void)obj;
  return 0;
}

static int fscript_object_gc(lua_State* L) {
  tk_object_t* obj = *(tk_object_t**)lua_touserdata(L, 1);
  tk_object_unref(obj);

  return 0;
}

static void fscript_object_create_global(lua_State* L, tk_object_t* obj, const char* name) {
  tk_object_t** p = (tk_object_t**)lua_newuserdata(L, sizeof(void*));
  *p = obj;

  tk_object_ref(obj);
  luaL_getmetatable(L, FSCRIPT_OBJECT_T);
  lua_setmetatable(L, -2);

  lua_setglobal(L, name);
}

static void fscript_object_init(lua_State* L, tk_object_t* obj, const char* type) {
  static const struct luaL_Reg index_funcs[] = {{"__index", fscript_object_get_prop},
                                                {"__newindex", fscript_object_set_prop},
                                                {"close", fscript_object_close},
                                                {"__gc", fscript_object_gc},
                                                {NULL, NULL}};
  luaL_newmetatable(L, type);
  lua_pushstring(L, "__index");
  lua_pushvalue(L, -2);
  lua_settable(L, -3);
  luaL_openlib(L, NULL, index_funcs, 0);
  lua_settop(L, 0);

  return;
}

typedef struct _object_value_t {
  tk_object_t object;
  value_t value;
} object_value_t;

static ret_t object_value_on_destroy(tk_object_t* obj) {
  object_value_t* o = (object_value_t*)(obj);
  value_reset(&(o->value));
  return RET_OK;
}

static const object_vtable_t s_object_value_vtable = {.type = "object_value",
                                                      .desc = "object_value",
                                                      .size = sizeof(object_value_t),
                                                      .is_collection = FALSE,
                                                      .on_destroy = object_value_on_destroy};

tk_object_t* object_value_create(value_t* v) {
  tk_object_t* o = NULL;
  object_value_t* wrapper = NULL;
  return_value_if_fail(v != NULL, NULL);
  o = tk_object_create(&s_object_value_vtable);
  return_value_if_fail(o != NULL, NULL);

  wrapper = (object_value_t*)(o);
  return_value_if_fail(wrapper != NULL, NULL);
  wrapper->value = *v;

  return o;
}

static ret_t tvalue_to_value(lua_State* L, int32_t i, value_t* v) {
  TValue* o = luaL_getarg(L, i);

  if (ttisfloat(o)) {
    value_set_double(v, luaL_checknumber(L, i));
  } else if (ttisinteger(o)) {
    value_set_int(v, luaL_checkinteger(L, i));
  } else if (ttisstring(o)) {
    value_set_str(v, luaL_checkstring(L, i));
  } else if (ttislightuserdata(o)) {
    *v = *(value_t*)lua_touserdata(L, i);
  } else if (ttisfulluserdata(o)) {
    tk_object_t* obj = *(tk_object_t**)lua_touserdata(L, i);
    if (obj->vt == &s_object_value_vtable) {
      object_value_t* ov = (object_value_t*)obj;
      value_copy(v, &(ov->value));
    } else {
      value_set_object(v, obj);
    }
  } else if (ttisboolean(o)) {
    value_set_bool(v, lua_toboolean(L, i));
  } else {
    log_debug("not supported\n");
    v->type = VALUE_TYPE_INVALID;
  }

  return RET_OK;
}

static void fscript_object_return(lua_State* L, tk_object_t* obj) {
  tk_object_t** p = (tk_object_t**)lua_newuserdata(L, sizeof(void*));
  *p = obj;
  tk_object_ref(obj);
  luaL_getmetatable(L, FSCRIPT_OBJECT_T);
  lua_setmetatable(L, -2);

  return;
}

static ret_t fscript_return_to_lua(lua_State* L, value_t* v) {
  switch (v->type) {
    case VALUE_TYPE_INT8:
    case VALUE_TYPE_UINT8:
    case VALUE_TYPE_INT16:
    case VALUE_TYPE_UINT16:
    case VALUE_TYPE_INT32:
    case VALUE_TYPE_UINT32: {
      lua_pushinteger(L, value_int(v));
      break;
    }
    case VALUE_TYPE_FLOAT32:
    case VALUE_TYPE_DOUBLE:
    case VALUE_TYPE_FLOAT:
    case VALUE_TYPE_INT64:
    case VALUE_TYPE_UINT64: {
      lua_pushnumber(L, value_double(v));
      break;
    }
    case VALUE_TYPE_STRING: {
      lua_pushstring(L, value_str(v));
      value_reset(v);
      break;
    }
    case VALUE_TYPE_OBJECT: {
      tk_object_t* obj = value_object(v);
      fscript_object_return(L, obj);
      value_reset(v);
      break;
    }
    default: {
      if (v->free_handle) {
        tk_object_t* obj = object_value_create(v);
        return_value_if_fail(obj != NULL, RET_OOM);
        fscript_object_return(L, obj);
        TK_OBJECT_UNREF(obj);
      } else {
        value_t* nv = lua_newuserdata(L, sizeof(value_t));
        return_value_if_fail(nv != NULL, RET_OOM);
        *nv = *v;
        lua_pushlightuserdata(L, nv);
      }
      break;
    }
  }

  return RET_OK;
}

static fscript_t* fscript_lua_get_fscript(lua_State* L) {
  fscript_t* fscript = NULL;

  lua_getglobal(L, "fscript");
  fscript = (fscript_t*)lua_touserdata(L, -1);
  lua_pop(L, 1);

  return fscript;
}

static int fscript_call(lua_State* L, fscript_func_t func) {
  int32_t i = 0;
  value_t* v = NULL;
  value_t result;
  fscript_args_t args;
  value_t args_values[3];
  int32_t nr = L->top - L->ci->func;
  fscript_t* fscript = fscript_lua_get_fscript(L);
  return_value_if_fail(func != NULL && nr >= 1, 0);

  args.size = nr - 1;
  args.args = args_values;
  if (args.size > ARRAY_SIZE(args_values)) {
    args.args = TKMEM_ZALLOCN(value_t, args.size);
  }

  for (i = 1; i < nr; i++) {
    v = args.args + i - 1;

    tvalue_to_value(L, i, v);
  }

  value_set_int(&result, 0);
  func(fscript, &args, &result);

  fscript_return_to_lua(L, &result);

  if (args.args != args_values) {
    TKMEM_FREE(args.args);
  }

  return 1;
}

static int lua_call_assert(lua_State* L) {
  lua_Debug ar;
  lua_getstack(L, 1, &ar);
  lua_getinfo(L, "nSl", &ar);
  int line = ar.currentline;

  if (!lua_toboolean(L, 1)) {
    log_debug("assert failed! line: %d code %s\n", line, ar.source);
    exit(1);
  }

  return 0;
}

static int lua_call_bit_and(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "&", 1);
  }
  return fscript_call(L, func);
}

static int lua_call_bit_or(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "|", 1);
  }
  return fscript_call(L, func);
}

static int lua_call_bit_nor(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "^", 1);
  }
  return fscript_call(L, func);
}

static int lua_call_bit_not(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "~", 1);
  }
  return fscript_call(L, func);
}
static int lua_call_lshift(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "<<", 2);
  }
  return fscript_call(L, func);
}

static int lua_call_logic_not(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "!", 2);
  }
  return fscript_call(L, func);
}

static int lua_call_rshift(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, ">>", 2);
  }
  return fscript_call(L, func);
}

static int lua_call_print(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "print", sizeof("print") - 1);
  }
  return fscript_call(L, func);
}

#include "fscript_lua_funcs.inc"

static void globals_init(lua_State* L, fscript_t* fscript) {
  lua_pushlightuserdata(L, fscript);
  lua_setglobal(L, "fscript");

  fscript_lua_reg_funcs(L);

  lua_pushcfunction(L, lua_call_lshift);
  lua_setglobal(L, "lshift");

  lua_pushcfunction(L, lua_call_rshift);
  lua_setglobal(L, "rshift");

  lua_pushcfunction(L, lua_call_bit_and);
  lua_setglobal(L, "bit_and");

  lua_pushcfunction(L, lua_call_bit_or);
  lua_setglobal(L, "bit_or");

  lua_pushcfunction(L, lua_call_bit_nor);
  lua_setglobal(L, "bit_nor");

  lua_pushcfunction(L, lua_call_bit_not);
  lua_setglobal(L, "bit_not");

  lua_pushcfunction(L, lua_call_logic_not);
  lua_setglobal(L, "logic_not");

  fscript_object_init(L, fscript->obj, FSCRIPT_OBJECT_T);
  fscript_object_create_global(L, fscript->obj, "obj");
  fscript_object_create_global(L, fscript_get_global_object(), "global");

  return;
}

typedef struct _fscript_lua_hooks_t {
  fscript_hooks_t hooks;
  lua_State* L;
} fscript_lua_hooks_t;

static ret_t fscript_lua_on_deinit(fscript_t* fscript) {
  fscript_lua_hooks_t* hooks = (fscript_lua_hooks_t*)(fscript->hooks);
  lua_close(hooks->L);

  TKMEM_FREE(fscript->hooks);
  fscript->hooks = NULL;

  return RET_OK;
}

static ret_t fscript_lua_before_exec(fscript_t* fscript) {
  fscript_lua_hooks_t* hooks = (fscript_lua_hooks_t*)(fscript->hooks);

  lua_pcall(hooks->L, 0, LUA_MULTRET, 0);

  return RET_OK;
}

static ret_t fscript_lua_exec_func(fscript_t* fscript, const char* name, fscript_func_call_t* iter,
                                   value_t* result) {
  return RET_OK;
}

static fscript_hooks_t* fscript_lua_hooks_create(lua_State* L) {
  fscript_lua_hooks_t* hooks = TKMEM_ZALLOC(fscript_lua_hooks_t);
  return_value_if_fail(hooks != NULL, NULL);

  hooks->hooks.exec_func = fscript_lua_exec_func;
  hooks->hooks.before_exec = fscript_lua_before_exec;
  hooks->hooks.on_deinit = fscript_lua_on_deinit;
  hooks->L = L;

  return (fscript_hooks_t*)hooks;
}

fscript_t* fscript_lua_create(tk_object_t* obj, const char* code) {
  return fscript_lua_create_ex(obj, code, TRUE, FALSE);
}

fscript_t* fscript_lua_create_ex(tk_object_t* obj, const char* code, bool_t clean, bool_t is_lua) {
  str_t str;
  lua_State* L = NULL;
  fscript_hooks_t* hooks = NULL;
  fscript_t* fscript = NULL;
  return_value_if_fail(code != NULL, NULL);
  if (obj == NULL) {
    obj = object_default_create();
  } else {
    TK_OBJECT_REF(obj);
  }
  return_value_if_fail(obj != NULL, NULL);

  str_init(&str, 1000);

  if (is_lua) {
    fscript = fscript_create_ex(obj, "print(123)", TRUE);
    str_set(&str, code);
  } else {
    fscript = fscript_create_ex(obj, code, TRUE);
    goto_error_if_fail(fscript != NULL);
    goto_error_if_fail(fscript_to_lua(fscript, &str) == RET_OK);
    log_debug("lua:\n%s\n", str.str);
  }
  L = luaL_newstate();
  goto_error_if_fail(L != NULL);

  luaL_openlibs(L);
  globals_init(L, fscript);

  if (luaL_loadstring(L, str.str)) {
    log_warn("%s\n", lua_tostring(L, -1));
    lua_pop(L, 1);
    goto error;
  }

  hooks = fscript_lua_hooks_create(L);
  goto_error_if_fail(hooks != NULL);
  fscript_set_self_hooks(fscript, hooks);

  if (clean) {
    fscript_clean(fscript);
  }
  str_reset(&str);
  TK_OBJECT_UNREF(obj);

  return fscript;
error:
  str_reset(&str);
  TK_OBJECT_UNREF(obj);
  if (fscript != NULL) {
    fscript_destroy(fscript);
  }

  if (L != NULL) {
    lua_close(L);
  }
  TK_OBJECT_UNREF(obj);

  return NULL;
}
