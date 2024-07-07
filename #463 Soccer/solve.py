tests = int(input())
for _ in range(tests):
  x_b, y_b = map(int, input().split())
  x_a, y_a = map(int, input().split())
  if x_b < y_b:
    if x_a >= y_a:
      print("NO")
    else:
      print("YES")
  else:
    if y_a >= x_a:
      print("NO")
    else:
      print("YES")
