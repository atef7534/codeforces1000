TESTS = int(input())
for _ in range(TESTS):
  sz = int(input())
  s = input()
  stack = []

  for c in s:
    if c == 'A':
      if stack:
        stack.pop()
    else:
      stack.append('Q')
  
  if stack:
    print("No")
  else:
    print("Yes")