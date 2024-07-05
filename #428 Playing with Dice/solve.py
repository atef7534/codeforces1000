TESTS = int(input())

for _ in range(TESTS):
  a, b  = map(int, input().split())
  if a < b:
    a, b = b, a
  
  if a + b == 2:
    print(0)
  else:
    print(2 * b + a - 2)