obj.a = object_create()
assert(logic_not(value_is_null(obj.a)))
assert(object_set(obj.a,"age",123))
assert((obj.a.age == 123))
assert(object_set(obj.a,"name","awtk"))
assert((obj.a.name == "awtk"))
assert((object_get(obj.a,"age") == 123))
print(object_get(obj.a,"age"))
assert(object_remove(obj.a,"age"))
assert(logic_not(value_is_valid(object_get(obj.a,"age"))))
unset("a")
obj.person = object_create()
assert(logic_not(value_is_null(obj.person)))
assert(object_set(obj.person,"age",123))
assert((obj.person.age == 123))
assert(object_set(obj.person,"name","awtk"))
assert((obj.person.name == "awtk"))
obj.global = object_create()
global.arr = array_create()
object_forward_events(global.arr,obj.global)
unset("person")
unset("global")