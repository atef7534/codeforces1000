tests = int(input())

for _ in range(tests):
  size = int(input())
  arr = list(sorted(map(int, input().split())))

  for i in range(1, size):
    if arr[i - 1] == arr[i]:
      print("NO")
      break
  else:
    print("YES")
    continue
  