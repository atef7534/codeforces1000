tests = int(input())

for _ in range(tests):
  n, a, b = map(int, input().split())

  if b < a:
    print(n * a)
  else:
    k = b - a
    if k > n:
      k = n
    print((n - k) * a + k + (k * b) - (k * (k + 1) // 2))
