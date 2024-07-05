tests = int(input())

for _ in range(tests):
  s = input()
  oneIndex = s.index('1')
  threeIndex = s.index('3')

  if oneIndex < threeIndex:
    print(13)
  else:
    print(31)