tests = int(input())

for _ in range(tests):
  posx1, posy1, posx2, posy2 = map(int, input().split())
  ans = posy2 - posy1
  posx1 += ans

  if posx1 < posx2 or posy2 < posy1:
    print(-1)
  else:
    print(ans + abs(posx1 - posx2))