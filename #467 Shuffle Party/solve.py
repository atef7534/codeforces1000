tests = int(input())
for _ in range(tests):
  n = int(input())
  itr = 1
  while itr << 1 <= n:
    itr <<= 1
  print(itr)
