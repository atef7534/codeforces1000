t = int(input())
for _ in range(t):
  a, b = map(int, input().split())
  if not (a & 1) and a // 2 != b or not (b & 1) and b // 2 != a:
    print("YES")
  else:
    print("NO")