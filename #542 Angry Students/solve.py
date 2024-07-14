"""
  author: atef_ai
  date: Jul 13 2024
  A. Angry Students
"""
tests = int(input())
for _ in range(tests):
  size = int(input())
  mystr = input()
  if 'A' in mystr:
    indexOfA = mystr.index('A')
    res, tmp = 0, 0
    for itr in range(indexOfA + 1, size):
      if mystr[itr] == 'P':
        tmp += 1
      else:
        res = max(res, tmp)
        tmp = 0
    res = max(res, tmp)
    print(res)
  else:
    print(0)