import sys
t = int(input())

arr = []
x = 0
for _ in range(t):
  s = input()
  if "OO" in s:
    x = 1
  arr.append(s)

if x:
  print("YES")
else:
  print("NO")
  sys.exit(0)

x = 0
for l in arr:
  if "OO" in l:
    if not x:
      l = l.replace("OO", "++", 1)
      x = 1
  print(l)

if not x:
  print("NO")

