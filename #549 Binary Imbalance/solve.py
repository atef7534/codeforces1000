"""
  author: atef_ai
  date: Jul 13 2024
  A. Binary Imbalance
"""
tests = int(input())
for _ in range(tests):
  size = int(input())
  mystr = input()
  cnt = mystr.count('0')
  ok = cnt * 2 > size
  for itr in range(size - 1):
    ok |= mystr[itr] != mystr[itr + 1]
  print("YES") if ok else print("NO")
