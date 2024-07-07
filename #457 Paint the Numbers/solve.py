sz = int(input())
arr = list(map(int, input().split()))
result = 0
taken = [0] * 101
arr.sort()

for itr in range(sz):
  if taken[arr[itr]]:
    continue
  taken[arr[itr]] = 1
  for itrj in range(itr + 1, sz):
    if taken[arr[itrj]]:
      continue
    if not (arr[itrj] % arr[itr]):
      taken[arr[itrj]] = 1
  result += 1
print(result)