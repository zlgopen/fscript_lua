obj.str = [[{
    "results": [
        {
            "location": {
                "id": "WS0E9D8WN298",
                "name": "GuangZhou"
            },
            "now": {
                "code": "9",
                "temperature": "30"
            },
            "last_update": "2022-04-28T14:50:00+08:00"
        }
    ],
    "name": "fscript",
    "age": 100
}]]
obj.a = json_load(obj.str)
assert((object_get(obj.a,"results.[0].location.id") == "WS0E9D8WN298"))
assert((object_get(obj.a,"results.[0].location.name") == "GuangZhou"))
assert((object_get(obj.a,"results.[0].now.code") == "9"))
assert((object_get(obj.a,"results.[0].now.temperature") == "30"))
assert((object_get(obj.a,"results.[0].last_update") == "2022-04-28T14:50:00+08:00"))
assert((object_get(obj.a,"name") == "fscript"))
assert((object_get(obj.a,"age") == 100))
obj.b = json_save(obj.a)
assert(file_write("test.json",obj.b))
obj.c = json_save_to_string(obj.a)
print(obj.c)
obj.a = json_load(file_read_text("test.json"))
assert((object_get(obj.a,"name") == "fscript"))
assert((object_get(obj.a,"age") == 100))
obj.a = json_load(file_read_binary("test.json"))
assert(file_remove("test.json"))
assert((object_get(obj.a,"name") == "fscript"))
assert((object_get(obj.a,"age") == 100))
assert(file_remove("test.json"))
unset("a")
unset("b")
unset("c")
unset("str")
