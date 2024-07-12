"""
  author: atef_ai
  date: Jul 12 2024
  A. Fence
"""
tests = int(input())
for _ in range(tests):
  sides = list(map(int, input().split()))
  sides.sort()
  print(abs(sides[-1] - (sides[0] + sides[1])) + 1)