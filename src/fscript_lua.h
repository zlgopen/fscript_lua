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

#ifndef TK_FSCRIPT_LUA
#define TK_FSCRIPT_LUA

#include "tkc/fscript.h"
#include "fscript_ext/fscript_ext.h"

typedef ret_t (*fscript_lua_custom_init_t)(void* ctx, fscript_t* fscript);
/**
 * @class fscript_lua_t
 * @annotation ["fake"]
 * 用lua运行fscript
 */

BEGIN_C_DECLS

#include "../lua/lua.h"
#include "../lua/lauxlib.h"
#include "../lua/lualib.h"
#include "../lua/lstate.h"

/**
 * @method fscript_lua_create
 *
 * 创建fscript对象。执行fscript_exec时，使用lua引擎执行。
 * @param {tk_object_t*} obj 对象。
 * @param {const char*} code fscript代码。
 *
 * @return {fscript_t*} 返回fscript对象。
 */
fscript_t* fscript_lua_create(tk_object_t* obj, const char* code);

/**
 * @method fscript_lua_reg_object
 * 注册全局对象。
 * @param {fscript_t*} fscript fscript对象。
 * @param {const char*} name 对象名。
 * @param {tk_object_t*} obj 对象。
 *
 * @return {ret_t} 返回RET_OK表示成功，否则表示失败。
 */
ret_t fscript_lua_reg_object(fscript_t* fscript, const char* name, tk_object_t* obj);

/**
 * @method fscript_lua_reg_func
 * 注册全局函数。
 * @param {fscript_t*} fscript fscript对象。
 * @param {const char*} name 函数名。
 * @param {lua_CFunction} func 函数。
 *
 * @return {ret_t} 返回RET_OK表示成功，否则表示失败。
 */
ret_t fscript_lua_reg_func(fscript_t* fscript, const char* name, lua_CFunction func);

/**
 * @method fscript_lua_create_ex
 *
 * 创建fscript对象。执行fscript_exec时，使用lua引擎执行。
 * @param {tk_object_t*} obj 对象。
 * @param {const char*} code fscript代码。
 * @param {bool_t} clean 是否清除fscript对象中无用的数据结构。
 * @param {fscript_lua_custom_init_t} on_init 初始化函数。
 * @param {void*} on_init_ctx 初始化函数的上下文。
 *
 * @return {fscript_t*} 返回fscript对象。
 */
fscript_t* fscript_lua_create_ex(tk_object_t* obj, const char* code, bool_t clean, bool_t is_lua,
  fscript_lua_custom_init_t on_init, void* on_init_ctx);

/*public for tests*/
/**
 * @method fscript_to_lua
 * 将fscript对象转换成lua代码。
 * @param {fscript_t*} fscript fscript对象。
 * @param {str_t*} str 用于返回lua代码。
 *
 * @return {ret_t} 返回RET_OK表示成功，否则表示失败。
 */
ret_t fscript_to_lua(fscript_t* fscript, str_t* str);

END_C_DECLS

#endif /*TK_FSCRIPT_LUA*/
