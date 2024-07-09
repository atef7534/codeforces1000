t = int(input())
for _ in range(t):
  b, p, f = map(int, input().split())
  h, c = map(int, input().split())
  total = 0
  b //= 2
  if c > h:
    total += min(b, f) * c
    b -= min(b, f)
    total += min(b, p) * h
  else:
    total += min(b, p) * h
    b -= min(b, p)
    total += min(b, f) * c
  print(total)


