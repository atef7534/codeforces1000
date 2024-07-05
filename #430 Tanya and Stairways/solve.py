n = int(input())
last = 0
stack = []
taken = False
steps = list(map(int, input().split()))

for step in steps:
  if step <= last:
    stack.append(last)
    take = True
  last = step

if not taken:
  stack.append(last)
print(len(stack))
print(*stack)
