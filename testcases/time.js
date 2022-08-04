var start = time_now_ms();
var sum = 0;
var i = 0;
while(i < 100000) {
  sum = sum + i;
  i = i + 1
}
var cost = time_now_ms() - start;
print(cost)

start = time_now_ms();
sum = 0;
i = 0;
while(i < 10000) {
  crc32("1234abcd")
  i = i + 1
}
cost = time_now_ms() - start;
print(cost)
