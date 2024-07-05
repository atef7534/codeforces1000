tests = int(input())

for _ in range(tests):
  n, k = map(int, input().split())

  arr = list(map(int, input().split()))

  for itr in range(n):
    if not k:
      break
    dd = 0
    while arr[itr] != 0 and k:
      dd += 1
      arr[itr] -= 1
      k -= 1
    arr[-1] += dd
  
  print(*arr)