"""
  author: atef_ai
  date: Jul 13 2024
  A. Omkar and Password
"""
tests = int(input())
for _ in range(tests):
  size = int(input())
  arr = list(map(int, input().split()))
  arr.sort()
  print(size) if arr[0] == arr[-1] else print(1)
  