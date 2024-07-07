from collections import Counter

tests = int(input())
for _ in range(tests):
  sz = int(input())
  arr = list(map(int, input().split()))
  mydict = Counter()

  
  for num in arr:
    if num < 0:
      num *= -1
    mydict[num] += 1
  
  count = 0
  for k, v in mydict.items():
    if v > 1:
      if not k:
        count += 1
        continue
      if v > 1:
        count += 2
      else:
        count += 1
    elif v:
      count += 1
  print(count)
  