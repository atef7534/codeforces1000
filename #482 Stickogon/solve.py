t = int(input())
for _ in range(t):
  sz = int(input())
  arr = list(map(int, input().split()))
  cnt = [0] * (max(arr) + 1)
  for n in arr:
    cnt[n] += 1
  result = 0
  for c in cnt:
    result += c // 3
  print(result)