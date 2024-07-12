t = int(input())
for _ in range(t):
  n = int(input())
  a = list(map(int, input().split()))
  r, s = 0, 0
  for itr in range(n):
    r += 1 if not a[itr] else 0
    a[itr] = a[itr] if a[itr] else 1
    s += a[itr]
  print(r + 1) if not s else print(r) if r else print(1) if not s else print(0)
  