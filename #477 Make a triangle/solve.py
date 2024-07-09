arr = list(map(int, input().split()))
arr.sort()

if arr[0] + arr[1] == arr[-1]:
  print(1)
elif arr[0] + arr[1] > arr[-1]:
  print(0)
else:
  print(arr[-1] - (arr[0] + arr[1]) + 1)