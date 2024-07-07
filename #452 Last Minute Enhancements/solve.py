from collections import Counter
tests = int(input())
for _ in range(tests):
  sz = int(input())
  arr = list(map(int, input().split()))
  ans = 0
  cnt = Counter()
  for num in arr:
    if cnt[num]:
      if not cnt[num + 1]:
        ans += 1
        cnt[num + 1] = 1
    else:
      cnt[num] = 1
      ans += 1
  print(ans)
    
  