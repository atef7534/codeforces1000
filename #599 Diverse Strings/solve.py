"""
  author: atef_ai
  date: Jul 18 2024
  problem: Diverse Strings
"""
t = int(input())
for _ in range(t):
  s = input()
  if not (len(s) - 1):
    print("YES")
    continue
  f = [0] * 26
  idx = 25
  for itr in range(0, len(s)):
    f[ord(s[itr]) - ord('a')] += 1
    idx = min(idx, ord(s[itr]) - ord('a'))
  good = f.count(0) + f.count(1) == 26
  valid = sum(f[idx: idx + len(s)]) == len(s)
  print("YES") if valid and good else print("NO")
  
