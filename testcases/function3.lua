function foo4(v1, v2)
  local v3 = (v1 + v2)
  
  if (v3 < 100)
  then
    return "awtk"
  else 
    return "react-awtk"
  end
end
print(foo4(10,20))
assert((foo4(10,20) == "awtk"))
assert((foo4(100,200) == "react-awtk"))
