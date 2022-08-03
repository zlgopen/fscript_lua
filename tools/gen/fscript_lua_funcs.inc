static int lua_call_print(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "print", sizeof("print")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_expr(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "expr", sizeof("expr")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_get(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "get", sizeof("get")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_set(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "set", sizeof("set")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_set_local(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "set_local", sizeof("set_local")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_max(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "max", sizeof("max")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_min(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "min", sizeof("min")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_minus(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "minus", sizeof("minus")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_and(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "and", sizeof("and")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_exec(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "exec", sizeof("exec")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_join(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "join", sizeof("join")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_one_of(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "one_of", sizeof("one_of")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_int(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "int", sizeof("int")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_i8(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "i8", sizeof("i8")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_i16(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "i16", sizeof("i16")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_i32(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "i32", sizeof("i32")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_i64(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "i64", sizeof("i64")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_u8(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "u8", sizeof("u8")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_u16(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "u16", sizeof("u16")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_u32(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "u32", sizeof("u32")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_u64(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "u64", sizeof("u64")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_f32(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "f32", sizeof("f32")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_f64(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "f64", sizeof("f64")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_binary(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "binary", sizeof("binary")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_float(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "float", sizeof("float")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_number(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "number", sizeof("number")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_double(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "double", sizeof("double")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_iformat(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "iformat", sizeof("iformat")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_fformat(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "fformat", sizeof("fformat")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_unset(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "unset", sizeof("unset")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_str(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "str", sizeof("str")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_string(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "string", sizeof("string")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_sub(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "sub", sizeof("sub")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_assert(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "assert", sizeof("assert")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_substr(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "substr", sizeof("substr")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_has_error(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "has_error", sizeof("has_error")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_get_last_error(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "get_last_error", sizeof("get_last_error")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_clear_error(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "clear_error", sizeof("clear_error")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_sum(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "sum", sizeof("sum")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_tolower(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "tolower", sizeof("tolower")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_toupper(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "toupper", sizeof("toupper")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_eval(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "eval", sizeof("eval")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_trim(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "trim", sizeof("trim")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_abs(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "abs", sizeof("abs")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_round(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "round", sizeof("round")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_floor(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "floor", sizeof("floor")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_ceil(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "ceil", sizeof("ceil")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_clamp(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "clamp", sizeof("clamp")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_contains(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "contains", sizeof("contains")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_div(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "div", sizeof("div")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_eq(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "eq", sizeof("eq")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_ge(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "ge", sizeof("ge")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_great(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "great", sizeof("great")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_le(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "le", sizeof("le")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_len(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "len", sizeof("len")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_strlen(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "strlen", sizeof("strlen")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_less(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "less", sizeof("less")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_mul(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "mul", sizeof("mul")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_noop(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "noop", sizeof("noop")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_seq(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "seq", sizeof("seq")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_not(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "not", sizeof("not")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_or(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "or", sizeof("or")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_random(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "random", sizeof("random")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_replace(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "replace", sizeof("replace")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_sleep_ms(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "sleep_ms", sizeof("sleep_ms")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_app_conf(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "app_conf", sizeof("app_conf")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_app_conf_save(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "app_conf_save", sizeof("app_conf_save")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_array_create(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "array_create", sizeof("array_create")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_array_dup(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "array_dup", sizeof("array_dup")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_array_create_with_str(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "array_create_with_str", sizeof("array_create_with_str")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_array_create_repeated(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "array_create_repeated", sizeof("array_create_repeated")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_array_push(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "array_push", sizeof("array_push")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_array_pop(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "array_pop", sizeof("array_pop")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_array_shift(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "array_shift", sizeof("array_shift")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_array_get(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "array_get", sizeof("array_get")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_array_set(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "array_set", sizeof("array_set")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_array_insert(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "array_insert", sizeof("array_insert")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_array_remove(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "array_remove", sizeof("array_remove")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_array_get_and_remove(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "array_get_and_remove", sizeof("array_get_and_remove")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_array_index_of(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "array_index_of", sizeof("array_index_of")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_array_last_index_of(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "array_last_index_of", sizeof("array_last_index_of")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_array_clear(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "array_clear", sizeof("array_clear")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_array_reverse(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "array_reverse", sizeof("array_reverse")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_array_join(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "array_join", sizeof("array_join")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_array_sort(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "array_sort", sizeof("array_sort")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_array_clone_and_sort(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "array_clone_and_sort", sizeof("array_clone_and_sort")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_array_min(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "array_min", sizeof("array_min")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_array_max(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "array_max", sizeof("array_max")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_array_avg(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "array_avg", sizeof("array_avg")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_array_sum(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "array_sum", sizeof("array_sum")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_array_is_empty(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "array_is_empty", sizeof("array_is_empty")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_array_size(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "array_size", sizeof("array_size")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_bit_get(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "bit_get", sizeof("bit_get")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_bit_set(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "bit_set", sizeof("bit_set")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_bit_clear(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "bit_clear", sizeof("bit_clear")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_bit_toggle(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "bit_toggle", sizeof("bit_toggle")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_crc16(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "crc16", sizeof("crc16")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_crc32(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "crc32", sizeof("crc32")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_cksum(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "cksum", sizeof("cksum")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_date_time_create(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "date_time_create", sizeof("date_time_create")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_date_time_to_time(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "date_time_to_time", sizeof("date_time_to_time")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_date_time_from_time(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "date_time_from_time", sizeof("date_time_from_time")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_date_time_set(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "date_time_set", sizeof("date_time_set")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_time_now_us(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "time_now_us", sizeof("time_now_us")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_time_now_ms(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "time_now_ms", sizeof("time_now_ms")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_time_now_s(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "time_now_s", sizeof("time_now_s")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_time_now(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "time_now", sizeof("time_now")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_is_leap_year(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "is_leap_year", sizeof("is_leap_year")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_get_days_of_month(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "get_days_of_month", sizeof("get_days_of_month")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_date_time_set_prop(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "date_time_set_prop", sizeof("date_time_set_prop")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_date_time_get_prop(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "date_time_get_prop", sizeof("date_time_get_prop")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_is_little(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "is_little", sizeof("is_little")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_htonl(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "htonl", sizeof("htonl")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_ntohl(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "ntohl", sizeof("ntohl")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_htons(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "htons", sizeof("htons")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_ntohs(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "ntohs", sizeof("ntohs")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_htonf(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "htonf", sizeof("htonf")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_ntohf(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "ntohf", sizeof("ntohf")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_htonll(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "htonll", sizeof("htonll")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_ntohll(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "ntohll", sizeof("ntohll")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_index_of(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "index_of", sizeof("index_of")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_last_index_of(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "last_index_of", sizeof("last_index_of")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_ulen(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "ulen", sizeof("ulen")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_trim_left(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "trim_left", sizeof("trim_left")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_trim_right(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "trim_right", sizeof("trim_right")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_totitle(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "totitle", sizeof("totitle")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_char_at(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "char_at", sizeof("char_at")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_text_count(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "text_count", sizeof("text_count")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_text_reverse(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "text_reverse", sizeof("text_reverse")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_usubstr(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "usubstr", sizeof("usubstr")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_member_var(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "member_var", sizeof("member_var")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_global_var(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "global_var", sizeof("global_var")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_prompt(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "prompt", sizeof("prompt")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_value_is_valid(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "value_is_valid", sizeof("value_is_valid")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_value_is_null(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "value_is_null", sizeof("value_is_null")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_value_get_binary_data(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "value_get_binary_data", sizeof("value_get_binary_data")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_value_get_binary_size(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "value_get_binary_size", sizeof("value_get_binary_size")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_str_len(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "str_len", sizeof("str_len")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_str_is_empty(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "str_is_empty", sizeof("str_is_empty")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_str_append(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "str_append", sizeof("str_append")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_char_at_first(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "char_at_first", sizeof("char_at_first")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_char_at_last(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "char_at_last", sizeof("char_at_last")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_char_at_random(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "char_at_random", sizeof("char_at_random")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_flow_get(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "flow_get", sizeof("flow_get")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_flow_set(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "flow_set", sizeof("flow_set")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_define_param(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "define_param", sizeof("define_param")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_file_read_text(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "file_read_text", sizeof("file_read_text")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_file_read_binary(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "file_read_binary", sizeof("file_read_binary")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_file_write(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "file_write", sizeof("file_write")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_file_write_append(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "file_write_append", sizeof("file_write_append")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_file_exist(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "file_exist", sizeof("file_exist")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_file_get_size(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "file_get_size", sizeof("file_get_size")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_file_remove(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "file_remove", sizeof("file_remove")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_file_rename(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "file_rename", sizeof("file_rename")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_file_copy(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "file_copy", sizeof("file_copy")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_file_stat(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "file_stat", sizeof("file_stat")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_path_create(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "path_create", sizeof("path_create")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_path_remove(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "path_remove", sizeof("path_remove")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_path_exist(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "path_exist", sizeof("path_exist")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_path_rename(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "path_rename", sizeof("path_rename")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_path_list(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "path_list", sizeof("path_list")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_path_get_exe(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "path_get_exe", sizeof("path_get_exe")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_path_get_cwd(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "path_get_cwd", sizeof("path_get_cwd")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_path_get_temp(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "path_get_temp", sizeof("path_get_temp")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_path_get_app_root(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "path_get_app_root", sizeof("path_get_app_root")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_path_get_user_storage_root(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "path_get_user_storage_root", sizeof("path_get_user_storage_root")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_fs_get_disk_info(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "fs_get_disk_info", sizeof("fs_get_disk_info")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_iostream_get_istream(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "iostream_get_istream", sizeof("iostream_get_istream")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_iostream_get_ostream(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "iostream_get_ostream", sizeof("iostream_get_ostream")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_istream_file_create(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "istream_file_create", sizeof("istream_file_create")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_ostream_file_create(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "ostream_file_create", sizeof("ostream_file_create")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_iostream_tcp_create(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "iostream_tcp_create", sizeof("iostream_tcp_create")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_iostream_udp_create(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "iostream_udp_create", sizeof("iostream_udp_create")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_iostream_serial_create(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "iostream_serial_create", sizeof("iostream_serial_create")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_istream_seek(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "istream_seek", sizeof("istream_seek")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_istream_tell(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "istream_tell", sizeof("istream_tell")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_istream_read_uint8(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "istream_read_uint8", sizeof("istream_read_uint8")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_istream_read_uint16(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "istream_read_uint16", sizeof("istream_read_uint16")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_istream_read_uint32(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "istream_read_uint32", sizeof("istream_read_uint32")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_istream_read_uint64(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "istream_read_uint64", sizeof("istream_read_uint64")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_istream_read_int8(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "istream_read_int8", sizeof("istream_read_int8")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_istream_read_int16(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "istream_read_int16", sizeof("istream_read_int16")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_istream_read_int32(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "istream_read_int32", sizeof("istream_read_int32")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_istream_read_int64(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "istream_read_int64", sizeof("istream_read_int64")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_istream_read_float(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "istream_read_float", sizeof("istream_read_float")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_istream_read_double(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "istream_read_double", sizeof("istream_read_double")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_istream_read_string(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "istream_read_string", sizeof("istream_read_string")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_istream_read_binary(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "istream_read_binary", sizeof("istream_read_binary")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_istream_read_line(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "istream_read_line", sizeof("istream_read_line")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_istream_is_eos(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "istream_is_eos", sizeof("istream_is_eos")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_json_load(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "json_load", sizeof("json_load")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_json_save(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "json_save", sizeof("json_save")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_json_save_to_string(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "json_save_to_string", sizeof("json_save_to_string")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_ubjson_load(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "ubjson_load", sizeof("ubjson_load")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_ubjson_save(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "ubjson_save", sizeof("ubjson_save")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_d2r(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "d2r", sizeof("d2r")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_r2d(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "r2d", sizeof("r2d")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_acos(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "acos", sizeof("acos")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_asin(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "asin", sizeof("asin")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_atan(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "atan", sizeof("atan")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_atan2(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "atan2", sizeof("atan2")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_cos(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "cos", sizeof("cos")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_sin(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "sin", sizeof("sin")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_tan(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "tan", sizeof("tan")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_acos_deg(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "acos_deg", sizeof("acos_deg")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_asin_deg(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "asin_deg", sizeof("asin_deg")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_atan_deg(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "atan_deg", sizeof("atan_deg")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_atan2_deg(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "atan2_deg", sizeof("atan2_deg")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_cos_deg(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "cos_deg", sizeof("cos_deg")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_sin_deg(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "sin_deg", sizeof("sin_deg")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_tan_deg(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "tan_deg", sizeof("tan_deg")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_is_int(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "is_int", sizeof("is_int")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_is_odd(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "is_odd", sizeof("is_odd")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_is_even(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "is_even", sizeof("is_even")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_is_negative(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "is_negative", sizeof("is_negative")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_is_positive(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "is_positive", sizeof("is_positive")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_random0to1(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "random0to1", sizeof("random0to1")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_exp(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "exp", sizeof("exp")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_logf(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "logf", sizeof("logf")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_sqrt(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "sqrt", sizeof("sqrt")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_pow(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "pow", sizeof("pow")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_is_prime(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "is_prime", sizeof("is_prime")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_log10(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "log10", sizeof("log10")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_pow10(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "pow10", sizeof("pow10")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_require_str(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "require_str", sizeof("require_str")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_require(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "require", sizeof("require")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_object_create(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "object_create", sizeof("object_create")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_object_ref(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "object_ref", sizeof("object_ref")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_object_unref(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "object_unref", sizeof("object_unref")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_object_set(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "object_set", sizeof("object_set")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_object_get(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "object_get", sizeof("object_get")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_object_remove(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "object_remove", sizeof("object_remove")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_object_forward_events(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "object_forward_events", sizeof("object_forward_events")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_ostream_seek(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "ostream_seek", sizeof("ostream_seek")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_ostream_tell(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "ostream_tell", sizeof("ostream_tell")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_ostream_flush(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "ostream_flush", sizeof("ostream_flush")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_ostream_write_uint8(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "ostream_write_uint8", sizeof("ostream_write_uint8")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_ostream_write_uint16(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "ostream_write_uint16", sizeof("ostream_write_uint16")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_ostream_write_uint32(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "ostream_write_uint32", sizeof("ostream_write_uint32")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_ostream_write_uint64(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "ostream_write_uint64", sizeof("ostream_write_uint64")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_ostream_write_int8(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "ostream_write_int8", sizeof("ostream_write_int8")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_ostream_write_int16(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "ostream_write_int16", sizeof("ostream_write_int16")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_ostream_write_int32(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "ostream_write_int32", sizeof("ostream_write_int32")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_ostream_write_int64(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "ostream_write_int64", sizeof("ostream_write_int64")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_ostream_write_float(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "ostream_write_float", sizeof("ostream_write_float")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_ostream_write_double(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "ostream_write_double", sizeof("ostream_write_double")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_ostream_write_string(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "ostream_write_string", sizeof("ostream_write_string")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_ostream_write_binary(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "ostream_write_binary", sizeof("ostream_write_binary")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_rbuffer_create(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "rbuffer_create", sizeof("rbuffer_create")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_rbuffer_skip(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "rbuffer_skip", sizeof("rbuffer_skip")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_rbuffer_rewind(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "rbuffer_rewind", sizeof("rbuffer_rewind")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_rbuffer_read_uint8(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "rbuffer_read_uint8", sizeof("rbuffer_read_uint8")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_rbuffer_read_uint16(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "rbuffer_read_uint16", sizeof("rbuffer_read_uint16")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_rbuffer_read_uint32(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "rbuffer_read_uint32", sizeof("rbuffer_read_uint32")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_rbuffer_read_uint64(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "rbuffer_read_uint64", sizeof("rbuffer_read_uint64")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_rbuffer_read_int8(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "rbuffer_read_int8", sizeof("rbuffer_read_int8")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_rbuffer_read_int16(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "rbuffer_read_int16", sizeof("rbuffer_read_int16")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_rbuffer_read_int32(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "rbuffer_read_int32", sizeof("rbuffer_read_int32")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_rbuffer_read_int64(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "rbuffer_read_int64", sizeof("rbuffer_read_int64")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_rbuffer_read_float(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "rbuffer_read_float", sizeof("rbuffer_read_float")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_rbuffer_read_double(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "rbuffer_read_double", sizeof("rbuffer_read_double")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_rbuffer_read_string(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "rbuffer_read_string", sizeof("rbuffer_read_string")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_rbuffer_read_binary(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "rbuffer_read_binary", sizeof("rbuffer_read_binary")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_rbuffer_get_data(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "rbuffer_get_data", sizeof("rbuffer_get_data")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_rbuffer_get_cursor(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "rbuffer_get_cursor", sizeof("rbuffer_get_cursor")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_rbuffer_get_capacity(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "rbuffer_get_capacity", sizeof("rbuffer_get_capacity")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_typed_array_create(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "typed_array_create", sizeof("typed_array_create")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_typed_array_push(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "typed_array_push", sizeof("typed_array_push")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_typed_array_pop(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "typed_array_pop", sizeof("typed_array_pop")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_typed_array_get(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "typed_array_get", sizeof("typed_array_get")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_typed_array_set(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "typed_array_set", sizeof("typed_array_set")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_typed_array_insert(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "typed_array_insert", sizeof("typed_array_insert")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_typed_array_remove(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "typed_array_remove", sizeof("typed_array_remove")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_typed_array_clear(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "typed_array_clear", sizeof("typed_array_clear")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_typed_array_join(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "typed_array_join", sizeof("typed_array_join")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_wbuffer_create(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "wbuffer_create", sizeof("wbuffer_create")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_wbuffer_attach(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "wbuffer_attach", sizeof("wbuffer_attach")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_wbuffer_skip(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "wbuffer_skip", sizeof("wbuffer_skip")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_wbuffer_rewind(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "wbuffer_rewind", sizeof("wbuffer_rewind")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_wbuffer_write_uint8(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "wbuffer_write_uint8", sizeof("wbuffer_write_uint8")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_wbuffer_write_uint16(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "wbuffer_write_uint16", sizeof("wbuffer_write_uint16")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_wbuffer_write_uint32(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "wbuffer_write_uint32", sizeof("wbuffer_write_uint32")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_wbuffer_write_uint64(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "wbuffer_write_uint64", sizeof("wbuffer_write_uint64")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_wbuffer_write_int8(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "wbuffer_write_int8", sizeof("wbuffer_write_int8")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_wbuffer_write_int16(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "wbuffer_write_int16", sizeof("wbuffer_write_int16")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_wbuffer_write_int32(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "wbuffer_write_int32", sizeof("wbuffer_write_int32")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_wbuffer_write_int64(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "wbuffer_write_int64", sizeof("wbuffer_write_int64")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_wbuffer_write_float(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "wbuffer_write_float", sizeof("wbuffer_write_float")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_wbuffer_write_double(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "wbuffer_write_double", sizeof("wbuffer_write_double")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_wbuffer_write_string(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "wbuffer_write_string", sizeof("wbuffer_write_string")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_wbuffer_write_binary(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "wbuffer_write_binary", sizeof("wbuffer_write_binary")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_wbuffer_get_data(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "wbuffer_get_data", sizeof("wbuffer_get_data")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_wbuffer_get_cursor(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "wbuffer_get_cursor", sizeof("wbuffer_get_cursor")-1);
  }
  return fscript_call(L, func);
}
static int lua_call_wbuffer_get_capacity(lua_State* L) {
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "wbuffer_get_capacity", sizeof("wbuffer_get_capacity")-1);
  }
  return fscript_call(L, func);
}
static ret_t fscript_lua_reg_funcs(lua_State* L) {
  lua_pushcfunction(L, lua_call_print);
  lua_setglobal(L, "print");
  lua_pushcfunction(L, lua_call_expr);
  lua_setglobal(L, "expr");
  lua_pushcfunction(L, lua_call_get);
  lua_setglobal(L, "get");
  lua_pushcfunction(L, lua_call_set);
  lua_setglobal(L, "set");
  lua_pushcfunction(L, lua_call_set_local);
  lua_setglobal(L, "set_local");
  lua_pushcfunction(L, lua_call_max);
  lua_setglobal(L, "max");
  lua_pushcfunction(L, lua_call_min);
  lua_setglobal(L, "min");
  lua_pushcfunction(L, lua_call_minus);
  lua_setglobal(L, "minus");
  lua_pushcfunction(L, lua_call_and);
  lua_setglobal(L, "and");
  lua_pushcfunction(L, lua_call_exec);
  lua_setglobal(L, "exec");
  lua_pushcfunction(L, lua_call_join);
  lua_setglobal(L, "join");
  lua_pushcfunction(L, lua_call_one_of);
  lua_setglobal(L, "one_of");
  lua_pushcfunction(L, lua_call_int);
  lua_setglobal(L, "int");
  lua_pushcfunction(L, lua_call_i8);
  lua_setglobal(L, "i8");
  lua_pushcfunction(L, lua_call_i16);
  lua_setglobal(L, "i16");
  lua_pushcfunction(L, lua_call_i32);
  lua_setglobal(L, "i32");
  lua_pushcfunction(L, lua_call_i64);
  lua_setglobal(L, "i64");
  lua_pushcfunction(L, lua_call_u8);
  lua_setglobal(L, "u8");
  lua_pushcfunction(L, lua_call_u16);
  lua_setglobal(L, "u16");
  lua_pushcfunction(L, lua_call_u32);
  lua_setglobal(L, "u32");
  lua_pushcfunction(L, lua_call_u64);
  lua_setglobal(L, "u64");
  lua_pushcfunction(L, lua_call_f32);
  lua_setglobal(L, "f32");
  lua_pushcfunction(L, lua_call_f64);
  lua_setglobal(L, "f64");
  lua_pushcfunction(L, lua_call_binary);
  lua_setglobal(L, "binary");
  lua_pushcfunction(L, lua_call_float);
  lua_setglobal(L, "float");
  lua_pushcfunction(L, lua_call_number);
  lua_setglobal(L, "number");
  lua_pushcfunction(L, lua_call_double);
  lua_setglobal(L, "double");
  lua_pushcfunction(L, lua_call_iformat);
  lua_setglobal(L, "iformat");
  lua_pushcfunction(L, lua_call_fformat);
  lua_setglobal(L, "fformat");
  lua_pushcfunction(L, lua_call_unset);
  lua_setglobal(L, "unset");
  lua_pushcfunction(L, lua_call_str);
  lua_setglobal(L, "str");
  lua_pushcfunction(L, lua_call_string);
  lua_setglobal(L, "string");
  lua_pushcfunction(L, lua_call_sub);
  lua_setglobal(L, "sub");
  lua_pushcfunction(L, lua_call_assert);
  lua_setglobal(L, "assert");
  lua_pushcfunction(L, lua_call_substr);
  lua_setglobal(L, "substr");
  lua_pushcfunction(L, lua_call_has_error);
  lua_setglobal(L, "has_error");
  lua_pushcfunction(L, lua_call_get_last_error);
  lua_setglobal(L, "get_last_error");
  lua_pushcfunction(L, lua_call_clear_error);
  lua_setglobal(L, "clear_error");
  lua_pushcfunction(L, lua_call_sum);
  lua_setglobal(L, "sum");
  lua_pushcfunction(L, lua_call_tolower);
  lua_setglobal(L, "tolower");
  lua_pushcfunction(L, lua_call_toupper);
  lua_setglobal(L, "toupper");
  lua_pushcfunction(L, lua_call_eval);
  lua_setglobal(L, "eval");
  lua_pushcfunction(L, lua_call_trim);
  lua_setglobal(L, "trim");
  lua_pushcfunction(L, lua_call_abs);
  lua_setglobal(L, "abs");
  lua_pushcfunction(L, lua_call_round);
  lua_setglobal(L, "round");
  lua_pushcfunction(L, lua_call_floor);
  lua_setglobal(L, "floor");
  lua_pushcfunction(L, lua_call_ceil);
  lua_setglobal(L, "ceil");
  lua_pushcfunction(L, lua_call_clamp);
  lua_setglobal(L, "clamp");
  lua_pushcfunction(L, lua_call_contains);
  lua_setglobal(L, "contains");
  lua_pushcfunction(L, lua_call_div);
  lua_setglobal(L, "div");
  lua_pushcfunction(L, lua_call_eq);
  lua_setglobal(L, "eq");
  lua_pushcfunction(L, lua_call_ge);
  lua_setglobal(L, "ge");
  lua_pushcfunction(L, lua_call_great);
  lua_setglobal(L, "great");
  lua_pushcfunction(L, lua_call_le);
  lua_setglobal(L, "le");
  lua_pushcfunction(L, lua_call_len);
  lua_setglobal(L, "len");
  lua_pushcfunction(L, lua_call_strlen);
  lua_setglobal(L, "strlen");
  lua_pushcfunction(L, lua_call_less);
  lua_setglobal(L, "less");
  lua_pushcfunction(L, lua_call_mul);
  lua_setglobal(L, "mul");
  lua_pushcfunction(L, lua_call_noop);
  lua_setglobal(L, "noop");
  lua_pushcfunction(L, lua_call_seq);
  lua_setglobal(L, "seq");
  lua_pushcfunction(L, lua_call_not);
  lua_setglobal(L, "not");
  lua_pushcfunction(L, lua_call_or);
  lua_setglobal(L, "or");
  lua_pushcfunction(L, lua_call_random);
  lua_setglobal(L, "random");
  lua_pushcfunction(L, lua_call_replace);
  lua_setglobal(L, "replace");
  lua_pushcfunction(L, lua_call_sleep_ms);
  lua_setglobal(L, "sleep_ms");
  lua_pushcfunction(L, lua_call_app_conf);
  lua_setglobal(L, "app_conf");
  lua_pushcfunction(L, lua_call_app_conf_save);
  lua_setglobal(L, "app_conf_save");
  lua_pushcfunction(L, lua_call_array_create);
  lua_setglobal(L, "array_create");
  lua_pushcfunction(L, lua_call_array_dup);
  lua_setglobal(L, "array_dup");
  lua_pushcfunction(L, lua_call_array_create_with_str);
  lua_setglobal(L, "array_create_with_str");
  lua_pushcfunction(L, lua_call_array_create_repeated);
  lua_setglobal(L, "array_create_repeated");
  lua_pushcfunction(L, lua_call_array_push);
  lua_setglobal(L, "array_push");
  lua_pushcfunction(L, lua_call_array_pop);
  lua_setglobal(L, "array_pop");
  lua_pushcfunction(L, lua_call_array_shift);
  lua_setglobal(L, "array_shift");
  lua_pushcfunction(L, lua_call_array_get);
  lua_setglobal(L, "array_get");
  lua_pushcfunction(L, lua_call_array_set);
  lua_setglobal(L, "array_set");
  lua_pushcfunction(L, lua_call_array_insert);
  lua_setglobal(L, "array_insert");
  lua_pushcfunction(L, lua_call_array_remove);
  lua_setglobal(L, "array_remove");
  lua_pushcfunction(L, lua_call_array_get_and_remove);
  lua_setglobal(L, "array_get_and_remove");
  lua_pushcfunction(L, lua_call_array_index_of);
  lua_setglobal(L, "array_index_of");
  lua_pushcfunction(L, lua_call_array_last_index_of);
  lua_setglobal(L, "array_last_index_of");
  lua_pushcfunction(L, lua_call_array_clear);
  lua_setglobal(L, "array_clear");
  lua_pushcfunction(L, lua_call_array_reverse);
  lua_setglobal(L, "array_reverse");
  lua_pushcfunction(L, lua_call_array_join);
  lua_setglobal(L, "array_join");
  lua_pushcfunction(L, lua_call_array_sort);
  lua_setglobal(L, "array_sort");
  lua_pushcfunction(L, lua_call_array_clone_and_sort);
  lua_setglobal(L, "array_clone_and_sort");
  lua_pushcfunction(L, lua_call_array_min);
  lua_setglobal(L, "array_min");
  lua_pushcfunction(L, lua_call_array_max);
  lua_setglobal(L, "array_max");
  lua_pushcfunction(L, lua_call_array_avg);
  lua_setglobal(L, "array_avg");
  lua_pushcfunction(L, lua_call_array_sum);
  lua_setglobal(L, "array_sum");
  lua_pushcfunction(L, lua_call_array_is_empty);
  lua_setglobal(L, "array_is_empty");
  lua_pushcfunction(L, lua_call_array_size);
  lua_setglobal(L, "array_size");
  lua_pushcfunction(L, lua_call_bit_get);
  lua_setglobal(L, "bit_get");
  lua_pushcfunction(L, lua_call_bit_set);
  lua_setglobal(L, "bit_set");
  lua_pushcfunction(L, lua_call_bit_clear);
  lua_setglobal(L, "bit_clear");
  lua_pushcfunction(L, lua_call_bit_toggle);
  lua_setglobal(L, "bit_toggle");
  lua_pushcfunction(L, lua_call_crc16);
  lua_setglobal(L, "crc16");
  lua_pushcfunction(L, lua_call_crc32);
  lua_setglobal(L, "crc32");
  lua_pushcfunction(L, lua_call_cksum);
  lua_setglobal(L, "cksum");
  lua_pushcfunction(L, lua_call_date_time_create);
  lua_setglobal(L, "date_time_create");
  lua_pushcfunction(L, lua_call_date_time_to_time);
  lua_setglobal(L, "date_time_to_time");
  lua_pushcfunction(L, lua_call_date_time_from_time);
  lua_setglobal(L, "date_time_from_time");
  lua_pushcfunction(L, lua_call_date_time_set);
  lua_setglobal(L, "date_time_set");
  lua_pushcfunction(L, lua_call_time_now_us);
  lua_setglobal(L, "time_now_us");
  lua_pushcfunction(L, lua_call_time_now_ms);
  lua_setglobal(L, "time_now_ms");
  lua_pushcfunction(L, lua_call_time_now_s);
  lua_setglobal(L, "time_now_s");
  lua_pushcfunction(L, lua_call_time_now);
  lua_setglobal(L, "time_now");
  lua_pushcfunction(L, lua_call_is_leap_year);
  lua_setglobal(L, "is_leap_year");
  lua_pushcfunction(L, lua_call_get_days_of_month);
  lua_setglobal(L, "get_days_of_month");
  lua_pushcfunction(L, lua_call_date_time_set_prop);
  lua_setglobal(L, "date_time_set_prop");
  lua_pushcfunction(L, lua_call_date_time_get_prop);
  lua_setglobal(L, "date_time_get_prop");
  lua_pushcfunction(L, lua_call_is_little);
  lua_setglobal(L, "is_little");
  lua_pushcfunction(L, lua_call_htonl);
  lua_setglobal(L, "htonl");
  lua_pushcfunction(L, lua_call_ntohl);
  lua_setglobal(L, "ntohl");
  lua_pushcfunction(L, lua_call_htons);
  lua_setglobal(L, "htons");
  lua_pushcfunction(L, lua_call_ntohs);
  lua_setglobal(L, "ntohs");
  lua_pushcfunction(L, lua_call_htonf);
  lua_setglobal(L, "htonf");
  lua_pushcfunction(L, lua_call_ntohf);
  lua_setglobal(L, "ntohf");
  lua_pushcfunction(L, lua_call_htonll);
  lua_setglobal(L, "htonll");
  lua_pushcfunction(L, lua_call_ntohll);
  lua_setglobal(L, "ntohll");
  lua_pushcfunction(L, lua_call_index_of);
  lua_setglobal(L, "index_of");
  lua_pushcfunction(L, lua_call_last_index_of);
  lua_setglobal(L, "last_index_of");
  lua_pushcfunction(L, lua_call_ulen);
  lua_setglobal(L, "ulen");
  lua_pushcfunction(L, lua_call_trim_left);
  lua_setglobal(L, "trim_left");
  lua_pushcfunction(L, lua_call_trim_right);
  lua_setglobal(L, "trim_right");
  lua_pushcfunction(L, lua_call_totitle);
  lua_setglobal(L, "totitle");
  lua_pushcfunction(L, lua_call_char_at);
  lua_setglobal(L, "char_at");
  lua_pushcfunction(L, lua_call_text_count);
  lua_setglobal(L, "text_count");
  lua_pushcfunction(L, lua_call_text_reverse);
  lua_setglobal(L, "text_reverse");
  lua_pushcfunction(L, lua_call_usubstr);
  lua_setglobal(L, "usubstr");
  lua_pushcfunction(L, lua_call_member_var);
  lua_setglobal(L, "member_var");
  lua_pushcfunction(L, lua_call_global_var);
  lua_setglobal(L, "global_var");
  lua_pushcfunction(L, lua_call_prompt);
  lua_setglobal(L, "prompt");
  lua_pushcfunction(L, lua_call_value_is_valid);
  lua_setglobal(L, "value_is_valid");
  lua_pushcfunction(L, lua_call_value_is_null);
  lua_setglobal(L, "value_is_null");
  lua_pushcfunction(L, lua_call_value_get_binary_data);
  lua_setglobal(L, "value_get_binary_data");
  lua_pushcfunction(L, lua_call_value_get_binary_size);
  lua_setglobal(L, "value_get_binary_size");
  lua_pushcfunction(L, lua_call_str_len);
  lua_setglobal(L, "str_len");
  lua_pushcfunction(L, lua_call_str_is_empty);
  lua_setglobal(L, "str_is_empty");
  lua_pushcfunction(L, lua_call_str_append);
  lua_setglobal(L, "str_append");
  lua_pushcfunction(L, lua_call_char_at_first);
  lua_setglobal(L, "char_at_first");
  lua_pushcfunction(L, lua_call_char_at_last);
  lua_setglobal(L, "char_at_last");
  lua_pushcfunction(L, lua_call_char_at_random);
  lua_setglobal(L, "char_at_random");
  lua_pushcfunction(L, lua_call_flow_get);
  lua_setglobal(L, "flow_get");
  lua_pushcfunction(L, lua_call_flow_set);
  lua_setglobal(L, "flow_set");
  lua_pushcfunction(L, lua_call_define_param);
  lua_setglobal(L, "define_param");
  lua_pushcfunction(L, lua_call_file_read_text);
  lua_setglobal(L, "file_read_text");
  lua_pushcfunction(L, lua_call_file_read_binary);
  lua_setglobal(L, "file_read_binary");
  lua_pushcfunction(L, lua_call_file_write);
  lua_setglobal(L, "file_write");
  lua_pushcfunction(L, lua_call_file_write_append);
  lua_setglobal(L, "file_write_append");
  lua_pushcfunction(L, lua_call_file_exist);
  lua_setglobal(L, "file_exist");
  lua_pushcfunction(L, lua_call_file_get_size);
  lua_setglobal(L, "file_get_size");
  lua_pushcfunction(L, lua_call_file_remove);
  lua_setglobal(L, "file_remove");
  lua_pushcfunction(L, lua_call_file_rename);
  lua_setglobal(L, "file_rename");
  lua_pushcfunction(L, lua_call_file_copy);
  lua_setglobal(L, "file_copy");
  lua_pushcfunction(L, lua_call_file_stat);
  lua_setglobal(L, "file_stat");
  lua_pushcfunction(L, lua_call_path_create);
  lua_setglobal(L, "path_create");
  lua_pushcfunction(L, lua_call_path_remove);
  lua_setglobal(L, "path_remove");
  lua_pushcfunction(L, lua_call_path_exist);
  lua_setglobal(L, "path_exist");
  lua_pushcfunction(L, lua_call_path_rename);
  lua_setglobal(L, "path_rename");
  lua_pushcfunction(L, lua_call_path_list);
  lua_setglobal(L, "path_list");
  lua_pushcfunction(L, lua_call_path_get_exe);
  lua_setglobal(L, "path_get_exe");
  lua_pushcfunction(L, lua_call_path_get_cwd);
  lua_setglobal(L, "path_get_cwd");
  lua_pushcfunction(L, lua_call_path_get_temp);
  lua_setglobal(L, "path_get_temp");
  lua_pushcfunction(L, lua_call_path_get_app_root);
  lua_setglobal(L, "path_get_app_root");
  lua_pushcfunction(L, lua_call_path_get_user_storage_root);
  lua_setglobal(L, "path_get_user_storage_root");
  lua_pushcfunction(L, lua_call_fs_get_disk_info);
  lua_setglobal(L, "fs_get_disk_info");
  lua_pushcfunction(L, lua_call_iostream_get_istream);
  lua_setglobal(L, "iostream_get_istream");
  lua_pushcfunction(L, lua_call_iostream_get_ostream);
  lua_setglobal(L, "iostream_get_ostream");
  lua_pushcfunction(L, lua_call_istream_file_create);
  lua_setglobal(L, "istream_file_create");
  lua_pushcfunction(L, lua_call_ostream_file_create);
  lua_setglobal(L, "ostream_file_create");
  lua_pushcfunction(L, lua_call_iostream_tcp_create);
  lua_setglobal(L, "iostream_tcp_create");
  lua_pushcfunction(L, lua_call_iostream_udp_create);
  lua_setglobal(L, "iostream_udp_create");
  lua_pushcfunction(L, lua_call_iostream_serial_create);
  lua_setglobal(L, "iostream_serial_create");
  lua_pushcfunction(L, lua_call_istream_seek);
  lua_setglobal(L, "istream_seek");
  lua_pushcfunction(L, lua_call_istream_tell);
  lua_setglobal(L, "istream_tell");
  lua_pushcfunction(L, lua_call_istream_read_uint8);
  lua_setglobal(L, "istream_read_uint8");
  lua_pushcfunction(L, lua_call_istream_read_uint16);
  lua_setglobal(L, "istream_read_uint16");
  lua_pushcfunction(L, lua_call_istream_read_uint32);
  lua_setglobal(L, "istream_read_uint32");
  lua_pushcfunction(L, lua_call_istream_read_uint64);
  lua_setglobal(L, "istream_read_uint64");
  lua_pushcfunction(L, lua_call_istream_read_int8);
  lua_setglobal(L, "istream_read_int8");
  lua_pushcfunction(L, lua_call_istream_read_int16);
  lua_setglobal(L, "istream_read_int16");
  lua_pushcfunction(L, lua_call_istream_read_int32);
  lua_setglobal(L, "istream_read_int32");
  lua_pushcfunction(L, lua_call_istream_read_int64);
  lua_setglobal(L, "istream_read_int64");
  lua_pushcfunction(L, lua_call_istream_read_float);
  lua_setglobal(L, "istream_read_float");
  lua_pushcfunction(L, lua_call_istream_read_double);
  lua_setglobal(L, "istream_read_double");
  lua_pushcfunction(L, lua_call_istream_read_string);
  lua_setglobal(L, "istream_read_string");
  lua_pushcfunction(L, lua_call_istream_read_binary);
  lua_setglobal(L, "istream_read_binary");
  lua_pushcfunction(L, lua_call_istream_read_line);
  lua_setglobal(L, "istream_read_line");
  lua_pushcfunction(L, lua_call_istream_is_eos);
  lua_setglobal(L, "istream_is_eos");
  lua_pushcfunction(L, lua_call_json_load);
  lua_setglobal(L, "json_load");
  lua_pushcfunction(L, lua_call_json_save);
  lua_setglobal(L, "json_save");
  lua_pushcfunction(L, lua_call_json_save_to_string);
  lua_setglobal(L, "json_save_to_string");
  lua_pushcfunction(L, lua_call_ubjson_load);
  lua_setglobal(L, "ubjson_load");
  lua_pushcfunction(L, lua_call_ubjson_save);
  lua_setglobal(L, "ubjson_save");
  lua_pushcfunction(L, lua_call_d2r);
  lua_setglobal(L, "d2r");
  lua_pushcfunction(L, lua_call_r2d);
  lua_setglobal(L, "r2d");
  lua_pushcfunction(L, lua_call_acos);
  lua_setglobal(L, "acos");
  lua_pushcfunction(L, lua_call_asin);
  lua_setglobal(L, "asin");
  lua_pushcfunction(L, lua_call_atan);
  lua_setglobal(L, "atan");
  lua_pushcfunction(L, lua_call_atan2);
  lua_setglobal(L, "atan2");
  lua_pushcfunction(L, lua_call_cos);
  lua_setglobal(L, "cos");
  lua_pushcfunction(L, lua_call_sin);
  lua_setglobal(L, "sin");
  lua_pushcfunction(L, lua_call_tan);
  lua_setglobal(L, "tan");
  lua_pushcfunction(L, lua_call_acos_deg);
  lua_setglobal(L, "acos_deg");
  lua_pushcfunction(L, lua_call_asin_deg);
  lua_setglobal(L, "asin_deg");
  lua_pushcfunction(L, lua_call_atan_deg);
  lua_setglobal(L, "atan_deg");
  lua_pushcfunction(L, lua_call_atan2_deg);
  lua_setglobal(L, "atan2_deg");
  lua_pushcfunction(L, lua_call_cos_deg);
  lua_setglobal(L, "cos_deg");
  lua_pushcfunction(L, lua_call_sin_deg);
  lua_setglobal(L, "sin_deg");
  lua_pushcfunction(L, lua_call_tan_deg);
  lua_setglobal(L, "tan_deg");
  lua_pushcfunction(L, lua_call_is_int);
  lua_setglobal(L, "is_int");
  lua_pushcfunction(L, lua_call_is_odd);
  lua_setglobal(L, "is_odd");
  lua_pushcfunction(L, lua_call_is_even);
  lua_setglobal(L, "is_even");
  lua_pushcfunction(L, lua_call_is_negative);
  lua_setglobal(L, "is_negative");
  lua_pushcfunction(L, lua_call_is_positive);
  lua_setglobal(L, "is_positive");
  lua_pushcfunction(L, lua_call_random0to1);
  lua_setglobal(L, "random0to1");
  lua_pushcfunction(L, lua_call_exp);
  lua_setglobal(L, "exp");
  lua_pushcfunction(L, lua_call_logf);
  lua_setglobal(L, "logf");
  lua_pushcfunction(L, lua_call_sqrt);
  lua_setglobal(L, "sqrt");
  lua_pushcfunction(L, lua_call_pow);
  lua_setglobal(L, "pow");
  lua_pushcfunction(L, lua_call_is_prime);
  lua_setglobal(L, "is_prime");
  lua_pushcfunction(L, lua_call_log10);
  lua_setglobal(L, "log10");
  lua_pushcfunction(L, lua_call_pow10);
  lua_setglobal(L, "pow10");
  lua_pushcfunction(L, lua_call_require_str);
  lua_setglobal(L, "require_str");
  lua_pushcfunction(L, lua_call_require);
  lua_setglobal(L, "require");
  lua_pushcfunction(L, lua_call_object_create);
  lua_setglobal(L, "object_create");
  lua_pushcfunction(L, lua_call_object_ref);
  lua_setglobal(L, "object_ref");
  lua_pushcfunction(L, lua_call_object_unref);
  lua_setglobal(L, "object_unref");
  lua_pushcfunction(L, lua_call_object_set);
  lua_setglobal(L, "object_set");
  lua_pushcfunction(L, lua_call_object_get);
  lua_setglobal(L, "object_get");
  lua_pushcfunction(L, lua_call_object_remove);
  lua_setglobal(L, "object_remove");
  lua_pushcfunction(L, lua_call_object_forward_events);
  lua_setglobal(L, "object_forward_events");
  lua_pushcfunction(L, lua_call_ostream_seek);
  lua_setglobal(L, "ostream_seek");
  lua_pushcfunction(L, lua_call_ostream_tell);
  lua_setglobal(L, "ostream_tell");
  lua_pushcfunction(L, lua_call_ostream_flush);
  lua_setglobal(L, "ostream_flush");
  lua_pushcfunction(L, lua_call_ostream_write_uint8);
  lua_setglobal(L, "ostream_write_uint8");
  lua_pushcfunction(L, lua_call_ostream_write_uint16);
  lua_setglobal(L, "ostream_write_uint16");
  lua_pushcfunction(L, lua_call_ostream_write_uint32);
  lua_setglobal(L, "ostream_write_uint32");
  lua_pushcfunction(L, lua_call_ostream_write_uint64);
  lua_setglobal(L, "ostream_write_uint64");
  lua_pushcfunction(L, lua_call_ostream_write_int8);
  lua_setglobal(L, "ostream_write_int8");
  lua_pushcfunction(L, lua_call_ostream_write_int16);
  lua_setglobal(L, "ostream_write_int16");
  lua_pushcfunction(L, lua_call_ostream_write_int32);
  lua_setglobal(L, "ostream_write_int32");
  lua_pushcfunction(L, lua_call_ostream_write_int64);
  lua_setglobal(L, "ostream_write_int64");
  lua_pushcfunction(L, lua_call_ostream_write_float);
  lua_setglobal(L, "ostream_write_float");
  lua_pushcfunction(L, lua_call_ostream_write_double);
  lua_setglobal(L, "ostream_write_double");
  lua_pushcfunction(L, lua_call_ostream_write_string);
  lua_setglobal(L, "ostream_write_string");
  lua_pushcfunction(L, lua_call_ostream_write_binary);
  lua_setglobal(L, "ostream_write_binary");
  lua_pushcfunction(L, lua_call_rbuffer_create);
  lua_setglobal(L, "rbuffer_create");
  lua_pushcfunction(L, lua_call_rbuffer_skip);
  lua_setglobal(L, "rbuffer_skip");
  lua_pushcfunction(L, lua_call_rbuffer_rewind);
  lua_setglobal(L, "rbuffer_rewind");
  lua_pushcfunction(L, lua_call_rbuffer_read_uint8);
  lua_setglobal(L, "rbuffer_read_uint8");
  lua_pushcfunction(L, lua_call_rbuffer_read_uint16);
  lua_setglobal(L, "rbuffer_read_uint16");
  lua_pushcfunction(L, lua_call_rbuffer_read_uint32);
  lua_setglobal(L, "rbuffer_read_uint32");
  lua_pushcfunction(L, lua_call_rbuffer_read_uint64);
  lua_setglobal(L, "rbuffer_read_uint64");
  lua_pushcfunction(L, lua_call_rbuffer_read_int8);
  lua_setglobal(L, "rbuffer_read_int8");
  lua_pushcfunction(L, lua_call_rbuffer_read_int16);
  lua_setglobal(L, "rbuffer_read_int16");
  lua_pushcfunction(L, lua_call_rbuffer_read_int32);
  lua_setglobal(L, "rbuffer_read_int32");
  lua_pushcfunction(L, lua_call_rbuffer_read_int64);
  lua_setglobal(L, "rbuffer_read_int64");
  lua_pushcfunction(L, lua_call_rbuffer_read_float);
  lua_setglobal(L, "rbuffer_read_float");
  lua_pushcfunction(L, lua_call_rbuffer_read_double);
  lua_setglobal(L, "rbuffer_read_double");
  lua_pushcfunction(L, lua_call_rbuffer_read_string);
  lua_setglobal(L, "rbuffer_read_string");
  lua_pushcfunction(L, lua_call_rbuffer_read_binary);
  lua_setglobal(L, "rbuffer_read_binary");
  lua_pushcfunction(L, lua_call_rbuffer_get_data);
  lua_setglobal(L, "rbuffer_get_data");
  lua_pushcfunction(L, lua_call_rbuffer_get_cursor);
  lua_setglobal(L, "rbuffer_get_cursor");
  lua_pushcfunction(L, lua_call_rbuffer_get_capacity);
  lua_setglobal(L, "rbuffer_get_capacity");
  lua_pushcfunction(L, lua_call_typed_array_create);
  lua_setglobal(L, "typed_array_create");
  lua_pushcfunction(L, lua_call_typed_array_push);
  lua_setglobal(L, "typed_array_push");
  lua_pushcfunction(L, lua_call_typed_array_pop);
  lua_setglobal(L, "typed_array_pop");
  lua_pushcfunction(L, lua_call_typed_array_get);
  lua_setglobal(L, "typed_array_get");
  lua_pushcfunction(L, lua_call_typed_array_set);
  lua_setglobal(L, "typed_array_set");
  lua_pushcfunction(L, lua_call_typed_array_insert);
  lua_setglobal(L, "typed_array_insert");
  lua_pushcfunction(L, lua_call_typed_array_remove);
  lua_setglobal(L, "typed_array_remove");
  lua_pushcfunction(L, lua_call_typed_array_clear);
  lua_setglobal(L, "typed_array_clear");
  lua_pushcfunction(L, lua_call_typed_array_join);
  lua_setglobal(L, "typed_array_join");
  lua_pushcfunction(L, lua_call_wbuffer_create);
  lua_setglobal(L, "wbuffer_create");
  lua_pushcfunction(L, lua_call_wbuffer_attach);
  lua_setglobal(L, "wbuffer_attach");
  lua_pushcfunction(L, lua_call_wbuffer_skip);
  lua_setglobal(L, "wbuffer_skip");
  lua_pushcfunction(L, lua_call_wbuffer_rewind);
  lua_setglobal(L, "wbuffer_rewind");
  lua_pushcfunction(L, lua_call_wbuffer_write_uint8);
  lua_setglobal(L, "wbuffer_write_uint8");
  lua_pushcfunction(L, lua_call_wbuffer_write_uint16);
  lua_setglobal(L, "wbuffer_write_uint16");
  lua_pushcfunction(L, lua_call_wbuffer_write_uint32);
  lua_setglobal(L, "wbuffer_write_uint32");
  lua_pushcfunction(L, lua_call_wbuffer_write_uint64);
  lua_setglobal(L, "wbuffer_write_uint64");
  lua_pushcfunction(L, lua_call_wbuffer_write_int8);
  lua_setglobal(L, "wbuffer_write_int8");
  lua_pushcfunction(L, lua_call_wbuffer_write_int16);
  lua_setglobal(L, "wbuffer_write_int16");
  lua_pushcfunction(L, lua_call_wbuffer_write_int32);
  lua_setglobal(L, "wbuffer_write_int32");
  lua_pushcfunction(L, lua_call_wbuffer_write_int64);
  lua_setglobal(L, "wbuffer_write_int64");
  lua_pushcfunction(L, lua_call_wbuffer_write_float);
  lua_setglobal(L, "wbuffer_write_float");
  lua_pushcfunction(L, lua_call_wbuffer_write_double);
  lua_setglobal(L, "wbuffer_write_double");
  lua_pushcfunction(L, lua_call_wbuffer_write_string);
  lua_setglobal(L, "wbuffer_write_string");
  lua_pushcfunction(L, lua_call_wbuffer_write_binary);
  lua_setglobal(L, "wbuffer_write_binary");
  lua_pushcfunction(L, lua_call_wbuffer_get_data);
  lua_setglobal(L, "wbuffer_get_data");
  lua_pushcfunction(L, lua_call_wbuffer_get_cursor);
  lua_setglobal(L, "wbuffer_get_cursor");
  lua_pushcfunction(L, lua_call_wbuffer_get_capacity);
  lua_setglobal(L, "wbuffer_get_capacity");
  return RET_OK;
}
