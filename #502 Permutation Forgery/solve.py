t = int(input())
for _ in range(t):
  n = int(input())
  a = list(map(int, input().split()))
  for itr in range(n // 2):
    a[itr], a[n - itr - 1] = a[n - itr - 1], a[itr]
  print(*a)