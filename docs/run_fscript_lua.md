# 使用 lua 运行 fscript 笔记

## 1. 语法翻译

### 1.1. var

* 在 fscript 中，局部变量用 var 声明。
* 在 lua 中，局部变量用 local 声明。

示例：

* fscript 

```fscript
var a = 0
```

* lua 

```lua
local a = 0
```

### 1.2. if

if 语句在 fscript 和 lua 中，格式基本相同，翻译比较容易。

示例：

* fscript 

```fscript
if(a < 2) {
  print(1)
  print(2)
} else if(a > 2) {
  print(3)
  print(4)
} else {
  print(7)
  print(8)
}
```

* lua

```lua
if (a < 2)
then
  print(1)
  print(2)
elseif (a > 2)
then
  print(5)
  print(6)
else 
  print(7)
  print(8)
end
```

### 1.3 while

while 语句在 fscript 和 lua 中，格式基本相同，翻译比较容易。

示例：

* fscript 

```fscript
  var b = 0
  while(b < 10) {
    print(b)
    b = b + 1
  }
```

* lua 

```lua
  while (b < 10)
  do
    print(b)
    b = (b + 1)
  end
```

### 1.4 until

until 语句 翻译成 while 语句，把条件取反即可。

示例：

* fscript 

```fscript
  var aa=0
  var bb=0

  until(aa >= 10) {
    aa=aa+1
    bb=bb+aa
    print(aa, bb) 
  }
```

* lua 

```lua
  while(not ((aa >= 10)))
  do  
    aa = (aa + 1)
    bb = (bb + aa) 
    print(aa,bb)
  end 
```

### 1.5 for

for 语句在 fscript 和 lua 中形式亦有不同，所以干脆翻译成 while。

示例：
* fscript 

```fscript
for(var a = 0; a < 10; a = a + 1) { 
  print(100)
  print(a)
}
```

* lua 

```lua
local a = 0 
while(a < 10) 
do
  print(100)
  print(a)
a = (a + 1)
end

```

### 1.5 for_in

for_in 在 fscript 只是为遍历 array 写的一个语法糖，这里用 while 语句和相关函数实现。

示例：

* fscript 

```fscript
var i = 0 
var a = array_create()

array_push(a, 1)
array_push(a, 2)
array_push(a, 3)
for_in(i,a){
  print("--------------")
  print(i)
  print("==============")
}
```

* lua 

```lua
local i = 0 
local a = array_create()
array_push(a,1)
array_push(a,2)
array_push(a,3)

local ii_0=0
while(ii_0<a.size)
do
  i=array_get(a,ii_0)
  print("--------------")
  print(i)
  print("==============")
  ii_0=ii_0+1
end
```

## 1.6 repeat

repeat 语句也翻译 while 语句。

示例：

* fscript 

```fscript
  var j = 0;
  repeat(j, 2, 10, 2) {
    print(j * 1000)
  }
```

* lua 

```lua
  local j = 0 
  
  j=2 
  while(j<10)
  do  
    print((j * 1000))
    j=j+2
  end 
```

### 1.8 repeat_times

repeat\_times 语句也翻译 while 语句。

示例：

* fscript 

```fscript
  var j = 0 
  repeat_times(5) {
    print(j * 1000)
    print("world")
    j = j + 1 
  }
```

* lua 

```lua
  local j = 0 
  
  j=2 
  while(j<10)
  do  
    print((j * 1000))
    print(22222)
    j=j+2
  end 
```

 
### 1.9 字符串

普通字符串原样翻译，带换行的字符串，用 [[ ]] 括起来。

示例：

* fscript 

```fscript
'{
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
}'
```

* lua 

```lua
[[{ 
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
```

### 1.10 成员变量

fscript 的变量默认是成员变量，其访问 fscript->obj 的属性。为了与局部变量区分开，在翻译时加上 obj. 前缀，运行时给予特殊处理。

示例：

* fscript 

```fscript
name = "abc"
```

* lua 

```lua
obj.name = "abc"
```

### 1.11 函数调用

> fscript 和 lua 的函数调用完全一致。

示例：

* fscript 

```fscript
foo(1,2)
```

* lua 

```lua
foo(1,2)
```

### 1.12 函数定义

> fscript 和 lua 函数定义格式类似，直接翻译。

示例：

* fscript 

```fscript
function add(v1, v2, v3){
   return (v1+v2+v3);
}
assert(add(100, 200, 300) == 600)
print(add(100, 200, 300))
```

* lua 

```lua
function add(v1, v2, v3) 
  return ((v1 + v2) + v3) 
end
assert((add(100,200,300) == 600))
print(add(100,200,300))
```

### 1.13 扩展函数

大部分扩展函数都可以直接适配。set/get/unget 需要特殊处理，这几个函数需要的是变量名，而 lua 会把变量名解析成变量的值，为了解决这个问题，在翻译时，把变量名转成变量的值。

示例：

* fscript

```fscript
set(a, 100)
print(get(a))
unset(a)
```

```lua
set("a", 100)
print(get("a"))
unset("a")
```

### 1.14 特殊操作符

lua 没有位的操作符，把它翻译成函数即可。

示例：

```fscript
assert((1<<1) == 2)
assert((1<<2) == 4)
assert((1<<8) == 256)
assert(((0xf0112233 >> 24) & 0xff)  == 0xf0)
```

```lua
assert((lshift(1,1) == 2)) 
assert((lshift(1,2) == 4)) 
assert((lshift(1,8) == 256))
assert((bit_and(rshift(4027654707,24),255) == 240))
```

## 2. 运行时

语法翻译完成，但是仍然无法直接运行，需要做些运行时的处理。

### 2.1 成员变量

成员变量在翻译时加了 obj. 前缀，为了让 lua 可以访问到 fscript->obj 对象，需要注册一个全局对象 obj。

```c
fscript_object_create_global(L, fscript->obj, "obj");
```

### 2.2 全局变量

在 fscript 中，global. 开头的变量会定向到 fscript 的全局对象。在 lua 里面把 global 变量与 fscript 的 global 对象关联起来即可。

```c
fscript_object_create_global(L, fscript_get_global_object(), "global");
```

### 2.3 变量的生命周期

* 基本类型的变量，直接拷贝，所以无需特殊的生命周期管理。

* 对象通过引用计数管理。

* 其它动态分配的变量（如二进制数据），包装成 object_value。

```c
typedef struct _object_value_t {
  tk_object_t object;
  value_t value;
} object_value_t;

static ret_t object_value_on_destroy(tk_object_t* obj) {
  object_value_t* o = (object_value_t*)(obj);
  value_reset(&(o->value));
  return RET_OK;
}

static const object_vtable_t s_object_value_vtable = {.type = "object_value",
                                                      .desc = "object_value",
                                                      .size = sizeof(object_value_t),
                                                      .is_collection = FALSE,
                                                      .on_destroy = object_value_on_destroy};

tk_object_t* object_value_create(value_t* v) {
  tk_object_t* o = NULL;
  object_value_t* wrapper = NULL;
  return_value_if_fail(v != NULL, NULL);
  o = tk_object_create(&s_object_value_vtable);
  return_value_if_fail(o != NULL, NULL);

  wrapper = (object_value_t*)(o);
  return_value_if_fail(wrapper != NULL, NULL);
  wrapper->value = *v;

  return o;
}
```

### 2.4 扩展函数

> 需要将 fscript 的扩展函数注册到 lua 中。

示例

```c
static int lua_call_min(lua_State* L) { 
  static fscript_func_t func = NULL;
  if (func == NULL) {
    fscript_t* fscript = fscript_lua_get_fscript(L);
    func = fscript_find_func(fscript, "min", sizeof("min")-1);
  }
  return fscript_call(L, func);
}

  lua_pushcfunction(L, lua_call_min);
  lua_setglobal(L, "min");
  
```

## 3. 效果

* 原生函数调用，性能有微小损失。
* 表达式计算，性能有近 30 倍的提高。
* 综合来看，性能有明显提升高。
