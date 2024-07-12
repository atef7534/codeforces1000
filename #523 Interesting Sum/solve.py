t = int(input())
for _ in range(t):
  n = int(input())
  a = list(map(int, input().split()))
  a.sort()
  print(a[-1] - a[0] + a[-2] - a[1])
  