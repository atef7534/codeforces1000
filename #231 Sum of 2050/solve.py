tt = int(input())

for _ in range(tt):
  n, ans, x = int(input()), 0, 205000000000000000

  while x >= 2050:
    while x <= n:
      n -= x
      ans += 1
    x //= 10

  print(f"ans = {ans} and n = {n}")
  if not ans or n != 0:
    print(-1)
  else:
    print(ans)


