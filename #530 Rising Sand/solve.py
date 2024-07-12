"""
  author: atef_ai
  date: Jul 12 2024
  B. Rising Sand
"""
def get_normal(array, size):
  total = 0
  for itr in range(1, size - 1):
    if array[itr] > array[itr + 1] + array[itr - 1]:
      total += 1
  return total

tests = int(input())
for _ in range(tests):
  size, limit = map(int, input().split())
  nums = list(map(int, input().split()))
  if not (limit - 1):
    print((size + 1) // 2 - 1)
    continue
  total = 0
  for itr in range(1, size - 1):
    if nums[itr] > nums[itr - 1] + nums[itr + 1]:
      total += 1
  print(total)
