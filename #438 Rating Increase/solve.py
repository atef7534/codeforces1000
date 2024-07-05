TESTS = int(input())
for _ in range(TESTS):
  s = input()
  idx_r = len(s)
  for itr in range(1, len(s)):
    if s[itr] != '0':
      idx_r = itr
      break
  
  if idx_r == len(s):
    print(-1)
    continue

  x, y = int(s[: idx_r]), int(s[idx_r: ])
  if x < y:
    print(x, y)
  else:
    print(-1)
