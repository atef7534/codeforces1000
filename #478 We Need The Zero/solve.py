t = int(input())
for _ in range(t):
  n = int(input())
  a = list(map(int, input().split()))
  xor = a[0]
  for itr in range(1, n):
    ai = a[itr]
    xor = (xor ^ ai)
  ans = xor
  xorarr = []
  for ai in a:
    xorarr.append(xor ^ ai)
  xor = xorarr[0]
  for itr in range(1, n):
    xor = (xor ^ xorarr[itr])
  if not xor:
    print(ans)
  else:
    print(-1)