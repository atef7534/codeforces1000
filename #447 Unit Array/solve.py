tests = int(input())
for _ in range(tests):
  sz = int(input())
  arr = list(map(int, input().split()))
  m = arr.count(-1)

  total = 0
  if m > sz // 2:
    total += m - sz // 2
    m = sz // 2
  
  
  if m & 1:
    total += 1
  print(total)