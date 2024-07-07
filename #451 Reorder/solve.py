tests = int(input())
for _ in range(tests):
  sz, k = map(int, input().split())
  arr = list(map(int, input().split()))
  total = sum(arr)
  if total == k:
    print("YES")
  else:
    print("NO")
    
  