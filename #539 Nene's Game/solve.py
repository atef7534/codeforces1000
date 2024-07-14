"""
  author: atef_ai
  date: Jul 13 2024
  A. Nene's Game
"""
tests = int(input())
for _ in range(tests):
  k, q = map(int, input().split())
  arr = list(map(int, input().split()))
  arr.sort()
  ni = list(map(int, input().split()))
  for num in ni:
    print(min(num, arr[0] - 1), end=' ')
  print()

