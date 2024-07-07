# test cases t
t = int(input())

for _ in range(t):
  n = int(input()) # array size
  arr = list(map(int, input().split())) # array elements
  # start solution
  result = 1
  for num in arr:
    result *= num
  print((result + n - 1) * 2022)