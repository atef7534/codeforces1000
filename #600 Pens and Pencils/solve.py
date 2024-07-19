"""
  author: atef_ai
  date: Jul 18 2024
  problem: Pens and Pencils
"""
t = int(input())
for _ in range(t):
  a, b, c, d, k = map(int, input().split())
  pens = (a + c - 1) // c
  pencils = (b + d - 1) // d
  print(-1) if pens + pencils > k else print(pens, pencils)
  