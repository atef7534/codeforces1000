t = int(input())
for _ in range(t):
  n, h = map(int, input().split())
  a = list(map(int, input().split()))
  a.sort()
  ans = 2 * (h // (a[-1] + a[-2])) 
  r = h % (a[-1] + a[-2])
  if r > a[-1]:
    ans += 2
  elif r:
    ans += 1
  print(ans)