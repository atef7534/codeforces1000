t = int(input())
for _ in range(t):
  x, y = map(int, input().split())
  if x == y:
    print(2 * x)
    continue
  result = 2 * min(x, y) + 2 * (abs(x - y) - 1) + 1
  print(result)