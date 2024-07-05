n, k = map(int, input().split())
arr = list(map(int, input().split()))

ptr1, ptr2 = 0, n - 1
while ptr1 < n and arr[ptr1] <= k:
  ptr1 += 1

if ptr1 == n:
  print(n)
else:
  while ptr2 > -1 and arr[ptr2] <= k:
    ptr2 -= 1
  
  total = ptr1 + n - ptr2 - 1
  print(total)