n = int(input())
a = list(map(int, input().split()))
for itr in range(n):
  if a[itr] & 1:
    continue
  a[itr] -= 1
print(*a)
