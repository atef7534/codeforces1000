tt = int(input())

for _ in range(tt):
  n, m = map(int, input().split())
  x, s = input(), input()
  
  op = 0
  while s not in x and op <= 10:
    x += x
    op += 1
  
  if op > 10:
    print(-1)
  else:
    print(op)


