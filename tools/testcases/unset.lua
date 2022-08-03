obj.a = wbuffer_create()
wbuffer_write_int8(obj.a,-10)
print(wbuffer_get_cursor(obj.a))
unset("a")
