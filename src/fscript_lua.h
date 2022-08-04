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

/**
 * @class fscript_lua_t
 * @annotation ["fake"]
 * 用lua运行fscript
 */

BEGIN_C_DECLS

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

/*public for tests*/
/**
 * @method fscript_lua_create_ex
 *
 * 创建fscript对象。执行fscript_exec时，使用lua引擎执行。
 * @param {tk_object_t*} obj 对象。
 * @param {const char*} code fscript代码。
 * @param {bool_t} clean 是否清除fscript对象中无用的数据结构。
 *
 * @return {fscript_t*} 返回fscript对象。
 */
fscript_t* fscript_lua_create_ex(tk_object_t* obj, const char* code, bool_t clean, bool_t is_lua);

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
