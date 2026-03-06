q = int(input())

for _ in range(q):
  n = int(input())
  s, t = input().split()
  
  s = "".join(sorted(s))
  t = "".join(sorted(t))
  
  if s == t:
    print("YES")
  else:
    print("NO")
  