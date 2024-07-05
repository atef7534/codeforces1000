tests = int(input())
for _ in range(tests):
  n = int(input())
  if n <= 2:
    print(n)
    continue
  
  times = n // 3
  num = 1
  if not ((n - (2 * times + 1 * times)) & 1):
    num = 2
  
  while n:
    print(num, end = '')
    n -= num
    if num == 1:
      num = 2
    else:
      num = 1
  print()