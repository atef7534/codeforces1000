t = int(input())
for _ in range(t):
  n, k1, k2 = map(int, input().split())
  w, b = map(int, input().split())
  all_w = (min(k1, k2) + abs(k1 - k2) // 2)
  x, y = n - k1, n - k2
  all_b = (min(x, y) + abs(x - y) // 2)
  print("YES") if w <= all_w and b <= all_b else print("NO")