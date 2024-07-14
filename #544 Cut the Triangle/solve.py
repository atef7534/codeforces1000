"""
  author: atef_ai
  date: Jul 13 2024
  A. Cut the Triangle
"""
import math
tests = int(input())
def triangle(x1, x2, y1, y2):
  return math.sqrt((x2 - x1) ** 2 + (y2 - y1) ** 2)

for _ in range(tests):
  empty = input()
  xi, yi = list(), list()
  for itr in range(3):
    x, y = map(int, input().split())
    xi.append(x)
    yi.append(y)
  if yi[0] == yi[1] or yi[0] == yi[2] or yi[1] == yi[2]:
    if xi[0] == xi[1] or xi[0] == xi[2] or xi[1] == xi[2]:
      print("NO")
    else:
      print("YES")
  else:
    print("YES")
  
