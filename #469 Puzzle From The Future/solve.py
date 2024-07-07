tests = int(input())
for _ in range(tests):
  n = int(input())
  b = input()

  last = int(b[0]) + 1
  res = '1'

  for itr in range(1, n):
    c = int(b[itr])
    if c + 1 == last:
      res += '0'
      last = c
    else:
      res += '1'
      last = c + 1
  print(res)

