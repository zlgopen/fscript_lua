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

## 2. 运行时

语法翻译完成，但是仍然无法直接运行，需要做些运行时的处理。

### 2.1 成员变量

成员变量在翻译时加了 obj. 前缀，

### 2.2 全局变量

### 2.3 变量的生命周期

### 2.4 扩展函数
