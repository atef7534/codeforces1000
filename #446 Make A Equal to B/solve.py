tests = int(input())
for _ in range(tests):
  sz = int(input())
  arr1 = list(map(int, input().split()))
  arr2 = list(map(int, input().split()))

  f = 0
  m = 0
  for itr in range(sz):
    if arr1[itr] != arr2[itr]:
      f = 1
      m += 1
  
  arr1.sort()
  arr2.sort()

  c = 0
  for itr in range(sz):
    if arr1[itr] != arr2[itr]:
      c += 1
  
  print(min(c + f, m))