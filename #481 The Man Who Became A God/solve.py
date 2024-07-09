t = int(input())
for _ in range(t):
  sz, g = map(int, input().split())
  arr = list(map(int, input().split()))
  difs = []
  for i in range(0, sz - 1):
    difs.append(abs(arr[i] - arr[i + 1]))
  difs.sort()
  difs = difs[sz - g: ]
  cnt = [0] * 500
  for num in difs:
    cnt[num] += 1
  total = 0
  for i in range(sz - 1):
    d = abs(arr[i] - arr[i + 1])
    if cnt[d]:
      cnt[d] -= 1
      continue
    total += abs(arr[i] - arr[i + 1])
  print(total)