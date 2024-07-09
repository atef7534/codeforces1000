t = int(input())
mylist = []
for _ in range(t):
  x, y = map(int, input().split())
  mylist.append(list((x, y)))

z_one = 0
z_two = 0
for ls in mylist:
  if not ls[0]:
    z_one += 1
  if not ls[1]:
    z_two += 1

print(min(t - z_one, z_one) + min(t - z_two, z_two))