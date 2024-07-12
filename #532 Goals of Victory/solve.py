"""
  author: atef_ai
  date: Jul 12 2024
  A. Goals of Victory
"""
tests = int(input())
for _ in range(tests):
  size = int(input())
  arr = list(map(int, input().split()))
  sumArr = sum(arr)
  print(-1 * sumArr)

