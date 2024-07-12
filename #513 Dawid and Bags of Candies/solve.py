arr = list(map(int, input().split()))
arr.sort()
arr[2] += arr[1]
arr = [arr[0], arr[2], arr[3]]
arr.sort()

if arr[-1] == arr[0] + arr[1]:
  print("YES")
else:
  if sum(arr[: -1]) == arr[-1]:
    print("YES")
  else:
    print("NO")