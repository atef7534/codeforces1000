s = input()
a = s.count('a')
l = len(s)
if a > (l + 1) // 2:
  print(l)
else:
  print(a + a - 1)
