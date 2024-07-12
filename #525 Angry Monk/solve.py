t = int(input())
for _ in range(t):
  n, k = map(int, input().split())
  a = list(map(int, input().split()))
  a.sort()
  a.pop()
  r = sum([2 * num - 1 for num in a])
  print(r)
  
  