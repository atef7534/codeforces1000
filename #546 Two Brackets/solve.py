"""
  author: atef_ai
  date: Jul 13 2024
  C. Two Brackets
"""
tests = int(input())
for _ in range(tests):
  mystr = input()
  stackOne = []
  stackTwo = []
  total = 0
  for b in mystr:
    if b == '(':
      stackOne.append('(')
    elif b == '[':
      stackTwo.append('[')
    if b == ')':
      if stackOne:
        stackOne.pop()
        total += 1
    elif b == ']':
      if stackTwo:
        stackTwo.pop()
        total += 1
  print(total)


