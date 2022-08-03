obj.a = wbuffer_create()
assert((wbuffer_write_int8(obj.a,-10,-20) == 2))
assert((wbuffer_write_uint8(obj.a,10,20) == 2))
assert((wbuffer_get_cursor(obj.a) == 4))
assert((wbuffer_write_int16(obj.a,-10,-20) == 4))
assert((wbuffer_write_uint16(obj.a,10,20) == 4))
assert((wbuffer_get_cursor(obj.a) == 12))
assert((wbuffer_write_int32(obj.a,-10,-20) == 8))
assert((wbuffer_write_uint32(obj.a,10,20) == 8))
assert((wbuffer_get_cursor(obj.a) == 28))
assert((wbuffer_write_int64(obj.a,-10,-20) == 16))
assert((wbuffer_write_uint64(obj.a,10,20) == 16))
assert((wbuffer_get_cursor(obj.a) == 60))
assert((wbuffer_write_float(obj.a,-10,-20) == 8))
assert((wbuffer_write_double(obj.a,10,20) == 16))
assert((wbuffer_get_cursor(obj.a) == 84))
assert((wbuffer_write_string(obj.a,"ab","cd") == 6))
assert((wbuffer_write_binary(obj.a,"1234",4) == 4))
assert((wbuffer_get_cursor(obj.a) == 94))
obj.b = rbuffer_create(wbuffer_get_data(obj.a),wbuffer_get_cursor(obj.a))
assert((rbuffer_get_cursor(obj.b) == 0))
assert((rbuffer_read_int8(obj.b) == -10))
assert((rbuffer_read_int8(obj.b) == -20))
assert((rbuffer_read_uint8(obj.b) == 10))
assert((rbuffer_read_uint8(obj.b) == 20))
assert((rbuffer_read_int16(obj.b) == -10))
assert((rbuffer_read_int16(obj.b) == -20))
assert((rbuffer_read_uint16(obj.b) == 10))
assert((rbuffer_read_uint16(obj.b) == 20))
assert((rbuffer_read_int32(obj.b) == -10))
assert((rbuffer_read_int32(obj.b) == -20))
assert((rbuffer_read_uint32(obj.b) == 10))
assert((rbuffer_read_uint32(obj.b) == 20))
assert((rbuffer_read_int64(obj.b) == -10))
assert((rbuffer_read_int64(obj.b) == -20))
assert((rbuffer_read_uint64(obj.b) == 10))
assert((rbuffer_read_uint64(obj.b) == 20))
assert((rbuffer_read_float(obj.b) == -10))
assert((rbuffer_read_float(obj.b) == -20))
assert((rbuffer_read_double(obj.b) == 10))
assert((rbuffer_read_double(obj.b) == 20))
assert((rbuffer_read_string(obj.b) == "ab"))
assert((rbuffer_read_string(obj.b) == "cd"))
unset("a")
unset("b")
