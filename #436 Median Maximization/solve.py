TESTS = int(input())
for _ in range(TESTS):
  n, s = map(int, input().split())
  n -= (n + 1) // 2 - 1
  print(s // n)