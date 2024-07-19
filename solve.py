"""
  author: atef_ai
  date: Jul 18 2024
  problem: Andryusha and Socks
"""
n = int(input())
table = [0] * 100001
arr = list(map(int, input().split()))
ans = 0
length = 0
for num in arr:
  if table[num]:
    table[num] -= 1
    length -= 1
  else:
    table[num] += 1
    length += 1
  ans = max(ans, length)
print(ans)