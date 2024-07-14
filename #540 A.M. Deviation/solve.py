"""
  author: atef_ai
  date: Jul 13 2024
  A. A.M. Deviation
"""
tests = int(input())
for _ in range(tests):
  a1, a2, a3 = map(int, input().split())
  print(1) if (a1 + a2 + a3) % 3 else print(0)
