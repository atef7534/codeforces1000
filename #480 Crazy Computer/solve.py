sz, c = map(int, input().split())
arr = list(map(int, input().split()))
cnt = 0
for i in range(1, sz):
  if arr[i] - arr[i - 1] > c:
    cnt = i
print(sz - cnt)
