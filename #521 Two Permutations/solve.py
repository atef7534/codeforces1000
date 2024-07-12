t = int(input())
for _ in range(t):
  n, a, b = map(int, input().split())
  print ("YES") if a == b == n or (a + b) <= n - 2 else print("NO")