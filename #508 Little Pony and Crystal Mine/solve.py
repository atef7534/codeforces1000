n = int(input())
l = []
for itr in range(1, (n + 1) // 2 + 1):
  s = (n - (2 * itr - 1)) // 2
  c = s * '*' + (2 * itr - 1) * 'D' + s * '*'
  if s:
    l.append(c)
  print(c)
while l:
  print(l[-1])
  l.pop()

