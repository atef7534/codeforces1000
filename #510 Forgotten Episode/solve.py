n = int(input())
a = list(map(int, input().split()))
a.sort()
a.append(0)
for itr in range(1, n + 1):
  if a[itr - 1] != itr:
    print(itr)
    break
else:
  print(n)