t = int(input())
for _ in range(t):
  n = int(input())
  a = list(map(int, input().split()))
  b = list(map(int, input().split()))
  c = 0
  itr = 0
  itrj = 0
  while itr < n:
    while itrj < n and b[itrj] < a[itr]:
      c += 1
      itrj += 1
    itr += 1
    itrj += 1
  print(c)