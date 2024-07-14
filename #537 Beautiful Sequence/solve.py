"""
  author: atef_ai
  date: Jul 13 2024
  A. Beautiful Sequence
"""
tests = int(input())
for _ in range(tests):
  size = int(input())
  arr = list(map(int, input().split()))
  ok = False
  for itr, num in enumerate(arr):
    ok |= (num <= itr + 1 and num <= size)
  print("YES") if ok else print("NO")
  
