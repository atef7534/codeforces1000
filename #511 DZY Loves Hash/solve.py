p, n = map(int, input().split())
l = [0] * p
a = []
for _ in range(n):
  xi = int(input())
  a.append(xi % p)
for itr, num in enumerate(a):
  l[num] += 1
  if l[num] > 1:
    print(itr + 1)
    break
else:
  print(-1)