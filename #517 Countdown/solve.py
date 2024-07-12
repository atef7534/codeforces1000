t = int(input())
for _ in range(t):
  n = int(input())
  c = input()

  total = int(c[-1])
  for d in c[: -1]:
    d = int(d)
    if not d:
      continue
    total += 1 + d
  print(total)