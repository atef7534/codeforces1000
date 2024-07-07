tests = int(input())
for _ in range(tests):
  sz = int(input())
  arr = list(map(int, input().split()))
  myset = set()
  for itr in range(sz):
    for itrj in range(itr + 1, sz):
      myset.add(arr[itrj] - arr[itr])
  print(len(myset))
