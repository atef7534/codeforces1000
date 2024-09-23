t = int(input())
for _ in range(t):
  n, k = map(int, input().split(" "))
  a = [0] * (k + 1)
  r = 0
  tmp = 0
  for i in range(n):
    s = input()
    tmp = s.count('+')
  a[tmp] += 1
  r = max(r, a[tmp])
  print(tmp)