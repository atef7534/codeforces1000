t = int(input())
for _ in range(t):
  n = int(input())
  a = [itr for itr in range(1, n + 1)]
  print(n)
  print(*a)
  for itr in range(n - 1, 0, -1):
    a[itr], a[itr - 1] = a[itr - 1], a[itr]
    print(*a)