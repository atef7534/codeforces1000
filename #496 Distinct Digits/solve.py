left, right = map(int, input().split())

def valid(n):
  arr = [0] * 10
  while n:
    if arr[n % 10]:
      return False
    arr[n % 10] += 1
    n //= 10
  return True
 
while left <= right and not valid(left):
  left += 1

print(-1) if left > right else print(left)