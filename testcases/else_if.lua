local a = 1
local b = ""

if (a == 1)
then
  b = "a"
  print(b)
elseif (a == 2)
then
  b = "b"
  print(b)
elseif (a == 3)
then
  b = "c"
  print(b)
elseif (a == 4)
then
  b = "d"
  print(b)
else 
  b = "other"
  print(b)
end
assert((b == "a"))
a = 2

if (a == 1)
then
  b = "a"
  print(b)
elseif (a == 2)
then
  b = "b"
  print(b)
elseif (a == 3)
then
  b = "c"
  print(b)
elseif (a == 4)
then
  b = "d"
  print(b)
else 
  b = "other"
end
assert((b == "b"))
a = 3

if (a == 1)
then
  b = "a"
elseif (a == 2)
then
  b = "b"
elseif (a == 3)
then
  b = "c"
elseif (a == 4)
then
  b = "d"
else 
  b = "other"
end
assert((b == "c"))
a = 4

if (a == 1)
then
  b = "a"
elseif (a == 2)
then
  b = "b"
elseif (a == 3)
then
  b = "c"
elseif (a == 4)
then
  b = "d"
else 
  b = "other"
end
assert((b == "d"))
a = 50

if (a == 1)
then
  b = "a"
elseif (a == 2)
then
  b = "b"
elseif (a == 3)
then
  b = "c"
elseif (a == 4)
then
  b = "d"
else 
  b = "other"
end
assert((b == "other"))
