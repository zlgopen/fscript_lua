local i = 0

local iter_0= 0;
while(iter_0<5)
do
  print(i)
  print("hello")
  i = (i + 1)
  local j = 0
  
  local iter_1= 0;
  while(iter_1<5)
  do
    print((j * 1000))
    print("world")
    j = (j + 1)
    iter_1=iter_1+1
  end
  iter_0=iter_0+1
end
