"""
  author: atef_ai
  date: Jul 14 2024
  A. Marin and Photoshoot
"""
tests = int(input())
for _ in range(tests):
  size = int(input())
  mystr = input()
  total = 0
  for itr in range(size - 1):
    if mystr[itr] == '0':
      if mystr[itr + 1] == '0':
        total += 2
      else:
        if itr + 1 == size - 1:
          break
        if mystr[itr + 2] == '1':
          continue
        total += 1
  print(total)