"""
  author: atef_ai
  date: Jul 14 2024
  B. Nene and the Card Game
"""
tests = int(input())
for _ in range(tests):
  size = int(input())
  arr = list(map(int, input().split()))
  freqs = (max(arr) + 1) * [0]
  total = 0
  for num in arr:
    freqs[num] += 1
    total += freqs[num] // 2
  print(total)
