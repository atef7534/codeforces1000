"""
  author: atef_ai
  date: Jul 12 2024
  A. Consecutive Sum
"""
tests = int(input())
for _ in range(tests):
  size, limit = map(int, input().split())
  nums = list(map(int, input().split()))
  for itr in range(0, size - limit):
    if nums[itr % limit] < nums[itr + limit]:
      nums[itr % limit], nums[itr + limit] = nums[itr + limit], nums[itr % limit]
  resultOfMaxSum = sum(nums[: limit])
  print(resultOfMaxSum)