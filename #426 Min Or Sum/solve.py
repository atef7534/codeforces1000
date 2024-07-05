tests = int(input())

for _ in range(tests):
  size = int(input())
  arr = list(map(int, input().split()))

  bytes = [0] * 32
  for num in arr:
    for itr in range(31, -1, -1):
      if 2 ** itr <= num:
        bytes[itr] = 1
        num -= 2 ** itr
  
  ans = 0
  for itr in range(31, -1, -1):
    if bytes[itr]:
      ans += 2 ** itr
  print(ans)