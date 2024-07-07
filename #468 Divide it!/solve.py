tests = int(input())
for _ in range(tests):
  n = int(input())
  total = 0
  while n != 1:
    while not (n & 1) and n > 1:
      total += 1
      n //= 2
    
    if n % 5 and n % 3:
      break
    while not (n % 3):
      total += 1
      n = (n * 2) // 3
    while not (n % 5):
      total += 1
      n = (n * 4) // 5
  
  if not (n - 1):
    print(total)
  else:
    print(-1)
