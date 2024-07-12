t = int(input())
for _ in range(t):
  n = int(input())
  a = list(map(int, input().split()))
  a.sort()
  r = max(a)
  t = 0
  for itr in range(n):
    if itr >= 2:
      m = a[t: itr + 1]
      r = min(r, a[itr] - a[itr - 1] + a[itr - 1] - a[itr - 2])
      t += 1
  print(r)

