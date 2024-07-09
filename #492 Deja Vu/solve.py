t = int(input())
from copy import copy

def palindrome(s: str) -> bool:
  new_s = copy(s)
  new_s = new_s[::-1]
  return s == new_s

for _ in range(t):
  s = input()
  ca = s.count('a')
  if ca == len(s):
    print("NO")
  else:
    print("YES")
    if palindrome(s + 'a'):
      print('a' + s)
    else:
      print(s + 'a')
  