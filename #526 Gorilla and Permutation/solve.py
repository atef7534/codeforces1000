t = int(input())
for _ in range(t):
  n, k, g = map(int, input().split())
  a = list(range(n, 0, -1))
  c = 1
  for itr in range(n - k, n):
    a[itr] = c
    c += 1
  print(*a)