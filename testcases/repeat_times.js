var i = 0
repeat_times(5) {
  print(i)
  print("hello")
  i = i + 1

  var j = 0
  repeat_times(5) {
    print(j * 1000)
    print("world")
    j = j + 1
  }
}
