TESTS = int(input())
for _ in range(TESTS):
  n = int(input()) 
  grid = []
  for __ in range(2):
    grid.append(input())
  
  index = 0
  while index != n - 1:
    if grid[0][index + 1] == '0':
      index += 1
      continue
    if grid[1][index + 1] == '0':
      index += 1
      continue
    break
  if not (n - index - 1):
    print("YES")
  else:
    print("NO")