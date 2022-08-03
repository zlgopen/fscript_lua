function foo4 (v1, v2) {
  var v3 = v1 + v2;
  if(v3 < 100) {
    return "awtk";
  } else {
    return "react-awtk";
  }
}

print(foo4(10, 20))
assert(foo4(10, 20) == 'awtk')
assert(foo4(100, 200) == 'react-awtk')
