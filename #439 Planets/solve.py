TESTS = int(input())
for _ in range(TESTS):
  sz, c = map(int, input().split())
  arr = list(map(int, input().split()))
  cnt = [0] * 101
  for num in arr:
    cnt[num] += 1
  
  total = 0
  for cntt in cnt:
    if cntt:
      total += min(c, cntt)
  print(total)