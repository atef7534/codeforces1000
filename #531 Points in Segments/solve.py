"""
  author: atef_ai
  date: Jul 12 2024
  A. Points in Segments
"""
segments, limit = map(int, input().split())
myset = set()
for _ in range(segments):
  left, right = map(int, input().split())
  myset.update(range(left, right + 1))
arr = list(myset)
arr.sort()
if len(arr) != limit:
  print(limit - len(arr))
  for itr in range(1, limit + 1):
    if itr not in arr:
      print(itr, end=' ')
  print()
else:
  print('0\n')
