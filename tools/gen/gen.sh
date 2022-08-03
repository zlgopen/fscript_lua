for f in $(cat all); 
do
  echo "static int lua_call_$f(lua_State* L) {"
  echo "  static fscript_func_t func = NULL;"
  echo "  if (func == NULL) {"
  echo "    fscript_t* fscript = fscript_lua_get_fscript(L);"
  echo "    func = fscript_find_func(fscript, \"$f\", sizeof(\"$f\")-1);"
  echo "  }"
  echo "  return fscript_call(L, func);"
  echo "}"
done


echo "static ret_t fscript_lua_reg_funcs(lua_State* L) {"
for f in $(cat all); 
do
  echo "  lua_pushcfunction(L, lua_call_$f);"
  echo "  lua_setglobal(L, \"$f\");"
done
echo "  return RET_OK;"
echo "}"
