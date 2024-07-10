t = int(input())
for _ in range(t):
  n = int(input())
  a = list(map(int, input().split()))
  mx = 0
  for itr in range(n):
    if a[itr] <= itr + 1:
      continue
    mx = max(mx, a[itr] - (itr + 1))
  print(mx)