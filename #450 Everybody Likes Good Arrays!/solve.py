tests = int(input())
for _ in range(tests):
  sz = int(input())
  arr = list(map(int, input().split()))
  ans, cnt, l = 0, 0, arr[0] & 1
  for num in arr:
    if num & 1 != l:
      l = num & 1
      ans += cnt - 1
      cnt = 0
    cnt += 1
  ans += cnt - 1
  print(ans)
    
  