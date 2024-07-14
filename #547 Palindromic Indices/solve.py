"""
  author: atef_ai
  date: Jul 13 2024
  A. Palindromic Indices
"""
tests = int(input())
for _ in range(tests):
  size = int(input())
  mystr = input()
  left = 0
  for itr in range(0, (size + 1) // 2 - 1):
    if mystr[itr] != mystr[itr + 1]:
      left = itr + 1
  right = size - 1
  for itr in range(size - 1, (size + 1) // 2 - 1, -1):
    if mystr[itr] != mystr[itr - 1]:
      right = itr - 1
  print(right - left + 1)
  