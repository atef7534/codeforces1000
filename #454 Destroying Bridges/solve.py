tests = int(input())
for _ in range(tests):
  islands, k = map(int, input().split())
  if k >= islands - 1:
    print(1)
  else:
    print(islands)
  