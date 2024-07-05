TESTS = int(input())
for _ in range(TESTS):
  q = int(input())
  x, y = None, None
  ok = True
  for __ in range(q):
    t1, t2 = map(int, input().split())
    if not __:
      x, y = t1, t2
    else:
      if t2 < y:
        continue
      if t1 >= x:
        ok = False
  
  if not ok:
    print(-1)
  else:
    print(x)
