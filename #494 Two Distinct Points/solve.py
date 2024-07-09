t = int(input())
for _ in range(t):
  l_one, r_one, l_two, r_two = map(int, input().split())
  if l_one == l_two:
    if r_one == l_one:
      print(l_one, l_two + 1)
    else:
      print(l_one + 1, l_two)
  else:
    print(l_one, l_two)