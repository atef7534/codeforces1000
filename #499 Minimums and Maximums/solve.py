t = int(input())
for _ in range(t):
  l_one, r_one, l_two, r_two = map(int, input().split())
  if l_two > r_one or l_one > r_two:
    print(l_one + l_two)
  else:
    print(max(l_one, l_two))
    