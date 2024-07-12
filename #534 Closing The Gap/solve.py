"""
  author: atef_ai
  date: Jul 12 2024
  A. Closing The Gap
"""
tests = int(input())
for _ in range(tests):
  size = int(input())
  arr = list(map(int, input().split()))
  sumOfArr = sum(arr)
  print(0) if not (sumOfArr % size) else print(1)

