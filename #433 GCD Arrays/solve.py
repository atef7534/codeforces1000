tests = int(input())

for _ in range(tests):
  
  left, right, k = map(int, input().split())

  """
    s [E, O]
    e [E, O]
  """
  k *= 2
  d = right - left + 1
  if left == right and left > 1 or d - 1 == k and (right&1) + (left&1) <= 1 or d <= k:
    print("YES")
  else:
    print("NO")
  