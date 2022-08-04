#include "tkc.h"
#include "tkc/fscript.h"
#include "tkc/value.h"
#include "tkc/data_reader_factory.h"
#include "tkc/data_writer_factory.h"
#include "tkc/data_writer_file.h"
#include "tkc/data_writer_wbuffer.h"
#include "tkc/data_reader_file.h"
#include "tkc/data_reader_mem.h"

#include "fscript_lua.h"

int main(int argc, char* argv[]) {
  char* code = NULL;
  uint32_t size = 0;
  fscript_t* fscript = NULL;
  const char* filename = NULL;
  if (argc != 2) {
    log_debug("%s fscript_file \n", argv[0]);
    return 0;
  }

  platform_prepare();
  fscript_ext_init();
  data_writer_factory_set(data_writer_factory_create());
  data_reader_factory_set(data_reader_factory_create());
  data_writer_factory_register(data_writer_factory(), "file", data_writer_file_create);
  data_reader_factory_register(data_reader_factory(), "file", data_reader_file_create);
  data_reader_factory_register(data_reader_factory(), "mem", data_reader_mem_create);
  data_writer_factory_register(data_writer_factory(), "wbuffer", data_writer_wbuffer_create);

  filename = argv[1];
  code = (char*)file_read(filename, &size);
  return_value_if_fail(code != NULL, 0);

  fscript = fscript_lua_create_ex(NULL, code, TRUE, tk_str_end_with(filename, ".lua"));
  if (fscript != NULL) {
    value_t v;
    fscript_exec(fscript, &v);
    fscript_destroy(fscript);
  }

  TKMEM_FREE(code);

  return 0;
}
