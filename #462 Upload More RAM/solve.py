tests = int(input())
for _ in range(tests):
  n, k = map(int, input().split())
  print((n - 1) * k + 1)
