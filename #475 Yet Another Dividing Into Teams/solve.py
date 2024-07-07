t = int(input())
for _ in range(t):
  n = int(input())
  arr = list(map(int, input().split()))
  arr.sort()
  for itr in range(0, n - 1):
    if not (abs(arr[itr] - arr[itr + 1]) - 1):
      print("2")
      break
  else:
    print("1")