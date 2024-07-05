tests = int(input())
for _ in range(tests):
  sz = int(input())
  s = input()

  pos_r = -1
  for itr in range(sz):
    if s[itr] == 'R':
      pos_r = itr
      break
  
  if pos_r == -1:
    print(-1)
    continue

  ok = False
  for itr in range(pos_r, sz):
    if s[itr] == 'L':
      ok = True
      break
  
  if ok:
    print(0)
    continue

  s = s[: pos_r + 1]
  if not (len(s) - 1):
    print(-1)
  else:
    print(pos_r)
  
    
    