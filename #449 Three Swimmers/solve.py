tests = int(input())
for _ in range(tests):
  p, a, b, c = map(int, input().split())
  arr = [a, b, c]
  a = (p + a - 1) // a
  b = (p + b - 1) // b
  c = (p + c - 1) // c

  print(min(arr[0] * a, arr[1] * b, arr[2] * c) - p)
  