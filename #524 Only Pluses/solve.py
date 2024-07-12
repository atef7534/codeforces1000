t = int(input())
for _ in range(t):
  a = list(map(int, input().split()))
  a.sort()
  times = 5
  while times:
    a[0] += 1
    a.sort()
    times -= 1
  print(a[0] * a[1] * a[2])
  
  