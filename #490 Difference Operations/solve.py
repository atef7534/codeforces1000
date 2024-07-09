t = int(input())
for _ in range(t):
  n = int(input())
  a = list(map(int, input().split()))
  if not (a[0] - 1):
    print("YES")
  else:
    for itr in range(1, n):
      if a[itr] % a[0]:
        print("NO")
        break
    else:
      print("YES")
