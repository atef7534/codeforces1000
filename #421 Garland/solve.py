tests = int(input())

for _ in range(tests):
  s = input()
  nums = [0] * 10
  
  for itr in s:
    nums[int(itr)] += 1
  
  if 4 in nums:
    print(-1)
  else:
    if 3 in nums:
      print(6)
    else:
      print(4)
