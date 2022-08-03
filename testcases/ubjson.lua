obj.a = json_load([[
  {
    "name":"fscript", 
    "age":100
  }
]])
assert((object_get(obj.a,"name") == "fscript"))
assert((object_get(obj.a,"age") == 100))
obj.b = ubjson_save(obj.a)
print(obj.b)
obj.a = ubjson_load(obj.b)
assert((object_get(obj.a,"name") == "fscript"))
assert((object_get(obj.a,"age") == 100))
assert(file_write("test.ubjson",obj.b))
obj.a = ubjson_load(file_read_binary("test.ubjson"))
assert(file_remove("test.ubjson"))
assert((object_get(obj.a,"name") == "fscript"))
assert((object_get(obj.a,"age") == 100))
assert(file_remove("test.ubjson"))
unset("a")
unset("b")
