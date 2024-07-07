tests = int(input())
for _ in range(tests):
  a, b, x, y = map(int, input().split())
  print(max((b - y - 1) * a, y * a))