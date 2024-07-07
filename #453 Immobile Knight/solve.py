tests = int(input())
for _ in range(tests):
  n, m = map(int, input().split())
  if not (n - 1) or not (m - 1):
    print(1, 1)
  else:
    if n == 2:
      if m == 3:
        print(1, 2)
      else:
        print(1, 1)
    elif m == 2:
      if n == 3:
        print(2, 1)
      else:
        print(1, 1)
    elif n == 3:
      if m == 3:
        print(2, 2)
      else:
        print(1, 1)
    else:
      print(1, 1)