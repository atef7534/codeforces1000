t = int(input())
for _ in range(t):
  n = int(input())
  if (n & 1):
    print(3) if not (n - 1) else print(1)
  else:
    c = 0
    n2 = n
    while not (n2 & 1):
      n2 >>= 1
      c += 1
    if (1 << c) < n:
      print(1 << c)
    else:
      print((1 << c) + 1)