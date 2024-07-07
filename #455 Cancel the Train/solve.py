tests = int(input())
for _ in range(tests):
  n, m = map(int, input().split())
  arr_one = list(map(int, input().split()))
  arr_two = list(map(int, input().split()))

  f_one = dict()
  for num in arr_one:
    if not f_one.get(num, 0):
      f_one[num] = 1
    else:
      f_one[num] += 1
  
  cnt = 0
  for num in arr_two:
    if not f_one.get(num, 0):
      continue
    cnt += f_one[num]
  
  print(cnt)