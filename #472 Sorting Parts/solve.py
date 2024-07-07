t = int(input())
for _ in range(t):
  n = int(input())
  arr = list(map(int, input().split()))
  for itr in range(-1, -n, -1):
    if arr[itr] < arr[itr - 1]:
      print("YES")
      break
  else:
    print("NO")
  