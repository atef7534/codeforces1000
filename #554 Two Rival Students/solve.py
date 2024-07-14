"""
  author: atef_ai
  date: Jul 14 2024
  A. Two Rival Students
"""
tests = int(input())
for _ in range(tests):
  n, x, a, b = map(int, input().split())
  print(min(n - 1, (max(a, b) + x - min(a, b))))