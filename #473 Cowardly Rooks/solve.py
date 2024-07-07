t = int(input())
for _ in range(t):
  n, m = map(int, input().split())
  for __ in range(m):
    rx, ry = map(int, input().split())
  if not (m - 1):
    if not (n - 1):
      print("NO")
    else:
      print("YES")
  else:
    if n > m:
      print("YES")
    else:
      print("NO")
  