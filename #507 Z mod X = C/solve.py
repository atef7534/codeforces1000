t = int(input())
for _ in range(t):
  a, b, c = map(int, input().split())
  x = a + b + c
  y = a + b + c - a
  z = min(c, a + b + c - a - b)
  print(x, y, z)
