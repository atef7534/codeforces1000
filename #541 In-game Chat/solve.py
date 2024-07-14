"""
  author: atef_ai
  date: Jul 13 2024
  A. In-game Chat
"""
tests = int(input())
for _ in range(tests):
  size = int(input())
  mystr = input()
  bracketEnd = 0
  for itr in range(size - 1, -1, -1):
    if mystr[itr] != ')':
      break
    bracketEnd += 1
  print("YES") if 2 * bracketEnd > size else print("NO")

