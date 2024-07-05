from collections import Counter

tests = int(input())

for _ in range(tests):
  size = int(input())
  nums = list(map(int, input().split()))

  counts = Counter()
  mySet = set()
  for num in nums:
    counts[num] += 1
    mySet.add(num)

  if len(mySet) > 2:
    print("NO")
    continue
  
  if not (len(mySet) - 1):
    print("YES")
  else:
    myiter = iter(mySet)
    cnt1 = next(myiter)
    cnt2 = next(myiter)
    if abs(counts[cnt1] - counts[cnt2]) > 1:
      print("NO")
    else:
      print("YES")

  
  