tests = int(input())
for _ in range(tests):
  a, b = map(int, input().split())
  turn = False
  arr = [0, 1]
  while a and b:
    print(arr[turn], end = '')
    if not turn:
      a -= 1
    else:
      b -= 1
    turn = not turn
  print(a * '0' + b * '1')
