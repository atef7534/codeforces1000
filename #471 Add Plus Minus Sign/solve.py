t = int(input())
for _ in range(t):
  n = int(input())
  s = input()
  sm = int(s[0])
  s = s[1: ]
  result = "" 
  for bit in s:
    if not int(bit):
      result += '+'
      continue
    if not sm:
      sm += 1
      result += '+'
    else:
      sm -= 1
      result += '-'
  print(result)