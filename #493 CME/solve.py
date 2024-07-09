t = int(input())
for _ in range(t):
  n = int(input())
  m = (n + 1) // 2
  if not (m - 1):
    print(2)
  else:
    print(2 * m - n)