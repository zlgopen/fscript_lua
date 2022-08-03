local a = 0
local b = 0

while(not ((a >= 10)))
do
  a = (a + 1)
  b = (b + a)
  print(a,b)
  local aa = 0
  local bb = 0
  
  while(not ((aa >= 10)))
  do
    aa = (aa + 1)
    bb = (bb + aa)
    print(aa,bb)
  end
end
