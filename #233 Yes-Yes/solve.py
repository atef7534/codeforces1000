tt = int(input())

for _ in range(tt):
  s = input()
  c = len(s) // 3 + 2
  w = "".join(["Yes" for i in range(c)])
  
  if s in w:
    print("YES")
  else:
    print("NO")


