"""
  author: atef_ai
  date: Jul 13 2024
  A. String Building
"""
tests = int(input())
for _ in range(tests):
  mystr = input()
  ok = True
  last = mystr[0]
  tmp = 0
  for c in mystr: 
    if c != last:
      ok &= (tmp > 1)
      tmp = 1
      last = c
    else:
      tmp += 1
  ok &= (tmp > 1)
  print("YES") if ok else print("NO")