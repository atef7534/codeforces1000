t = int(input())
for _ in range(t):
  n = int(input())
  a = list(map(int, input().split()))
  print(min(a)) if min(a) < 0 else print(max(a))