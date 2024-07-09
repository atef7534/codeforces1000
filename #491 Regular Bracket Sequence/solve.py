t = int(input())
for _ in range(t):
  n = int(input())
  for __ in range(n):
    x = __ + 1
    print('(' * x + ')' * x + '()' * (n - x))
