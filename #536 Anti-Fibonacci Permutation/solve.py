"""
  author: atef_ai
  date: Jul 12 2024
  B. Anti-Fibonacci Permutation
"""
tests = int(input())
for _ in range(tests):
  n = int(input())
  if n == 3:
    print("1 3 2\n2 3 1\n3 2 1")
    continue
  nums = list(range(n, 0, -1))
  for itr in range(n):
    print(*nums)
    nums.append(nums[0])
    nums = nums[1: ]

