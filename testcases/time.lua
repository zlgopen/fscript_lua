local start = time_now_ms()
local sum = 0
local i = 0

while (i < 100000)
do
  sum = (sum + i)
  i = (i + 1)
end
local cost = (time_now_ms() - start)
print(cost)
start = time_now_ms()
sum = 0
i = 0

while (i < 10000)
do
  crc32("1234abcd")
  i = (i + 1)
end
cost = (time_now_ms() - start)
print(cost)
