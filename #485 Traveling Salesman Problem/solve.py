t = int(input())
for _ in range(t):
  p = int(input())
  maxx, minx, maxy, miny = 0, 0, 0, 0
  for __ in range(p):
    x, y = map(int, input().split())
    maxx = max(maxx, x)
    minx = min(minx, x)
    maxy = max(maxy, y)
    miny = min(miny, y)
  print(2 * abs(maxx - minx) + 2 * abs(maxy - miny))