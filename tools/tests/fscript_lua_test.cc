#include "tkc/fs.h"
#include "gtest/gtest.h"
#include "fscript_lua.h"

#include <string>

using std::string;
string s_log;

static ret_t fscript_print_log(fscript_t* fscript, fscript_args_t* args, value_t* v) {
  uint32_t i = 0;
  char buff[64];

  value_set_bool(v, TRUE);
  for (i = 0; i < args->size; i++) {
    if(i > 0) {
      s_log += " ";
    }
    s_log += value_str_ex(args->args + i, buff, sizeof(buff) - 1);
  }
  s_log += "\n";

  return RET_OK;
}

static void fscript_to_lua_test(const char* name) {
  str_t str;
  value_t v;
  void* data = NULL;
  uint32_t size = 0;
  fscript_t* fscript = NULL;
  char filename[MAX_PATH + 1] = {0};

  tk_snprintf(filename, MAX_PATH,  "testcases/%s.js", name);
  log_debug("input:%s\n", filename);
  data = file_read(filename, &size);
  ASSERT_EQ(data != NULL, TRUE);
  return_if_fail(data != NULL);

  fscript = fscript_lua_create_ex(NULL, (char*)data, FALSE);
  TKMEM_FREE(data);

  tk_snprintf(filename, MAX_PATH,  "testcases/%s.lua", name);
  data = file_read(filename, &size);
  ASSERT_EQ(data != NULL, TRUE);

  str_init(&str, 1000);
  fscript_to_lua(fscript, &str); 

  ASSERT_STREQ(str.str, (char*)data);
  TKMEM_FREE(data);
  str_reset(&str);

  s_log = "";
  fscript_set_print_func(fscript, fscript_print_log);
  value_set_int(&v, 0);
  fscript_exec(fscript, &v);
  value_reset(&v);

  tk_snprintf(filename, MAX_PATH,  "testcases/%s.log", name);
  data = file_read(filename, &size);
  if(data != NULL) {
    ASSERT_STREQ(s_log.c_str(), (char*)data);
  } else {
    log_debug("log:\n%s\n", s_log.c_str());
  }
  TKMEM_FREE(data);

  fscript_destroy(fscript);
}

TEST(fscript_lua, expr) {
  fscript_to_lua_test("expr");
}

TEST(fscript_lua, bits) {
  fscript_to_lua_test("bits");
}

TEST(fscript_lua, for) {
  fscript_to_lua_test("for");
}

TEST(fscript_lua, func) {
  fscript_to_lua_test("func");
}

TEST(fscript_lua, if) {
  fscript_to_lua_test("if");
}

TEST(fscript_lua, if_else) {
  fscript_to_lua_test("if_else");
}

TEST(fscript_lua, print) {
  fscript_to_lua_test("print");
}

TEST(fscript_lua, repeat) {
  fscript_to_lua_test("repeat");
}

TEST(fscript_lua, repeat_times) {
  fscript_to_lua_test("repeat_times");
}

TEST(fscript_lua, until) {
  fscript_to_lua_test("until");
}

TEST(fscript_lua, while) {
  fscript_to_lua_test("while");
}

TEST(fscript_lua, var) {
  fscript_to_lua_test("var");
}

TEST(fscript_lua, member_var) {
  fscript_to_lua_test("member_var");
}

TEST(fscript_lua, global_var) {
  fscript_to_lua_test("global_var");
}

TEST(fscript_lua, break) {
  fscript_to_lua_test("break");
}

TEST(fscript_lua, return) {
  fscript_to_lua_test("return");
}

TEST(fscript_lua, array) {
  fscript_to_lua_test("array");
}

TEST(fscript_lua, unset) {
  fscript_to_lua_test("unset");
}

TEST(fscript_lua, array2) {
  fscript_to_lua_test("array2");
}

TEST(fscript_lua, array3) {
  fscript_to_lua_test("array3");
}

TEST(fscript_lua, array4) {
  fscript_to_lua_test("array4");
}

TEST(fscript_lua, array5) {
  fscript_to_lua_test("array5");
}

TEST(fscript_lua, array6) {
  fscript_to_lua_test("array6");
}

TEST(fscript_lua, comments) {
  fscript_to_lua_test("comments");
}

TEST(fscript_lua, crc) {
  fscript_to_lua_test("crc");
}

TEST(fscript_lua, date_time) {
  fscript_to_lua_test("date_time");
}

TEST(fscript_lua, else_if) {
  fscript_to_lua_test("else_if");
}

TEST(fscript_lua, endian) {
  fscript_to_lua_test("endian");
}

TEST(fscript_lua, fs) {
  fscript_to_lua_test("fs");
}

TEST(fscript_lua, function1) {
  fscript_to_lua_test("function1");
}
TEST(fscript_lua, function2) {
  fscript_to_lua_test("function2");
}
TEST(fscript_lua, function3) {
  fscript_to_lua_test("function3");
}
TEST(fscript_lua, if1) {
  fscript_to_lua_test("if1");
}
TEST(fscript_lua, json) {
  fscript_to_lua_test("json");
}
TEST(fscript_lua, json1) {
  fscript_to_lua_test("json1");
}
TEST(fscript_lua, object) {
  fscript_to_lua_test("object");
}
TEST(fscript_lua, str) {
  fscript_to_lua_test("str");
}

TEST(fscript_lua, str2) {
  fscript_to_lua_test("str2");
}

TEST(fscript_lua, stream_file) {
  fscript_to_lua_test("stream_file");
}

TEST(fscript_lua, stream_file1) {
  fscript_to_lua_test("stream_file1");
}

TEST(fscript_lua, typed_array) { 
  fscript_to_lua_test("typed_array");
}

TEST(fscript_lua, typed_array1) {
  fscript_to_lua_test("typed_array1");
}

TEST(fscript_lua, typed_array2) {
  fscript_to_lua_test("typed_array2");
}

TEST(fscript_lua, ubjson) {
  fscript_to_lua_test("ubjson");
}

TEST(fscript_lua, wbuffer) {
  fscript_to_lua_test("wbuffer");
}

TEST(fscript_lua, wbuffer1) {
  fscript_to_lua_test("wbuffer1");
}

TEST(fscript_lua, wbuffer2) {
  fscript_to_lua_test("wbuffer2");
}

TEST(fscript_lua, wbuffer3) {
  fscript_to_lua_test("wbuffer3");
}

TEST(fscript_lua, for_in) {
  fscript_to_lua_test("for_in");
}
