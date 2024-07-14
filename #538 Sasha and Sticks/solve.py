"""
  author: atef_ai
  date: Jul 13 2024
  A. Sasha and Sticks
"""
n, k = map(int, input().split())
m = n % k
t = (n + k - 1) // k
if (t & 1):
  print("YES") if not m else print("NO")
else:
  print("NO") if not m else print("YES")
  