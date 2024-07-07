from collections import Counter
arr = list(map(int, input().split()))
cnt = Counter()
for num in arr:
  cnt[num] += 1

myset = set(arr)
s = sum(arr)
min_s = s

for num in myset:
  if cnt[num] == 2:
    min_s = min(min_s, s - 2 * num)
  elif cnt[num] > 2:
    min_s = min(min_s, s - 3 * num)
print(min_s)