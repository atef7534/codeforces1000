t = int(input())
for _ in range(t):
  n = int(input())
  a = list(map(int, input().split()))
  itr = 0
  while itr + 1 <= n and a[itr] == itr + 1:
    print(a[itr], end=' ')
    itr += 1
  if itr < n:
    pos = a.index(itr + 1)
    for itrj in range(pos, itr - 1, -1):
      print(a[itrj], end=' ')
    for p in range(pos + 1, n):
      print(a[p], end=' ')
    print()
  else:
    print()
