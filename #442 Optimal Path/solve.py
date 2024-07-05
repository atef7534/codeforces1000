TESTS = int(input())
for _ in range(TESTS):
  n, m = map(int, input().split())
  total = (m - 1) * (m) // 2 + m * (n * (n + 1)) // 2
  print(total)