"""
  author: atef_ai
  date: Jul 14 2024
  A. Everything Everywhere All But One
"""
tests = int(input())
for _ in range(tests):
  size = int(input())
  arr = list(map(int, input().split()))
  total = 0
  for num in arr:
    total += num
  ok = False
  for num in arr:
    if not ((total - num) % (size - 1)):
      mean = (total - num) // (size - 1)
      ok |= (mean == num)
  print("YES") if ok else print("NO")
