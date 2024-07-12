t = int(input())
for _ in range(t):
  n = int(input())
  a = list(map(int, input().split()))
  a.sort()
  left, right = 2, n - 2
  s1 = sum(a[: left])
  s2 = sum(a[right + 1: ])
  while s2 <= s1 and left < right:
    s1 += a[left]
    s2 += a[right]
    left += 1
    right -= 1
  if s2 > s1:
    print("YES")
  else:
    print("NO")
