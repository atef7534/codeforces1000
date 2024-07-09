s1 = input()
s2 = input()

fr_one_lower = [0] * 26
fr_one_upper = [0] * 26

for c in s1:
  if c == ' ':
    continue
  if c.islower():
    fr_one_lower[ord(c) - ord('a')] += 1
  else:
    fr_one_upper[ord(c) - ord('A')] += 1

fr_two_lower = [0] * 26
fr_two_upper = [0] * 26
for c in s2:
  if c == ' ':
    continue
  if c.islower():
    fr_two_lower[ord(c) - ord('a')] += 1
  else:
    fr_two_upper[ord(c) - ord('A')] += 1

for itr in range(26):
  if fr_two_lower[itr] > fr_one_lower[itr] or fr_two_upper[itr] > fr_one_upper[itr]:
    print("NO")
    break
else:
  print("YES")