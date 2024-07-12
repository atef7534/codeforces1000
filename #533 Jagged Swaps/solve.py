"""
  author: atef_ai
  date: Jul 12 2024
  A. Jagged Swaps
"""
tests = int(input())
for _ in range(tests):
  size = int(input())
  arr = list(map(int, input().split()))
  print("YES") if not (arr[0] - 1) else print("NO")

