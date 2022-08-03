local b = 0
local a = typed_array_create("i8",100000)

while (b < 100000)
do
  assert((typed_array_push(a,b) == 1))
  assert(a.size,b)
  b = (b + 1)
end
b = 0

while true
do
  assert((typed_array_push(a,b) == 1))
  assert(a.size,b)
  
  if (b % 2)
  then
    print(b,typed_array_get(a,b))
  end
  
  if (b > 10)
  then
    break
  end
  b = (b + 1)
end
assert(typed_array_clear(a))
assert((a.size == 0))
unset("a")
