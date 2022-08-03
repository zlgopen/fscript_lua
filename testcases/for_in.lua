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
