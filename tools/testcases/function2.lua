function f1()
  local a = 10
  local b = 20
  local c = (a + b)
  return c
end
function f2()
  local a = 10
  local b = 20
  return (a + b)
end
function f3()
  local a = 10
  local b = 20
  return (a + b)
end
function f4()
  local a = 10
  local b = 20
  return 30
end
assert((f1() == 30))
assert((f2() == 30))
assert((f3() == 30))
assert((f4() == 30))
print(f4())
