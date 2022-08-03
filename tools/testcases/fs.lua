assert(file_write("test.txt","hello"))
assert(file_exist("test.txt"))
assert((file_get_size("test.txt") == 5))
assert((file_read_text("test.txt") == "hello"))
assert(file_write_append("test.txt","world"))
assert((file_read_text("test.txt") == "helloworld"))
assert(file_rename("test.txt","rename.txt"))
assert(logic_not(file_exist("test.txt")))
assert((file_read_text("rename.txt") == "helloworld"))
assert(file_copy("rename.txt","copy.txt"))
assert((file_read_text("copy.txt") == "helloworld"))
assert(file_remove("copy.txt"))
assert(logic_not(file_exist("copy.txt")))
obj.a = file_stat("rename.txt")
print(join(": ","dev",obj.a.dev))
print(join(": ","ino",obj.a.ino))
print(join(": ","mode",obj.a.mode))
print(join(": ","nlink",obj.a.nlink))
print(join(": ","uid",obj.a.uid))
print(join(": ","rdev",obj.a.rdev))
print(join(": ","size",obj.a.size))
print(join(": ","atime",obj.a.atime))
print(join(": ","mtime",obj.a.mtime))
print(join(": ","ctime",obj.a.ctime))
print(join(": ","is_dir",obj.a.is_dir))
print(join(": ","is_link",obj.a.is_link))
print(join(": ","is_reg_file",obj.a.is_reg_file))
assert(file_remove("rename.txt"))
assert(logic_not(file_exist("rename.txt")))
assert(file_write("test.bin","hello",5))
assert(file_exist("test.bin"))
assert((file_get_size("test.bin") == 5))
obj.a = file_read_binary("test.bin")
assert((value_get_binary_size(obj.a) == 5))
assert(file_remove("test.bin"))
assert(logic_not(file_exist("test.bin")))
assert(file_write("test.bin",obj.a))
assert(file_exist("test.bin"))
assert((file_get_size("test.bin") == 5))
assert(file_remove("test.bin"))
assert(path_create("a/b/c"))
assert(path_exist("a/b/c"))
assert(path_remove("a/b/c"))
assert(logic_not(path_exist("a/b/c")))
assert(path_rename("a/b","a/bbb"))
assert(logic_not(path_exist("a/b")))
assert(path_exist("a/bbb"))
assert(file_write("a/test.txt","hello"))
obj.a = path_list("a")
assert((obj.a.size == 2))
obj.b = array_get(obj.a,0)
obj.c = array_get(obj.a,1)
assert((obj.b.name == "bbb"))
assert((obj.c.name == "test.txt"))
assert(path_remove("a"))
assert(logic_not(path_exist("a")))
print(path_get_exe())
print(path_get_cwd())
print(path_get_temp())
print(path_get_app_root())
print(path_get_user_storage_root())
unset("a")
unset("b")
unset("c")