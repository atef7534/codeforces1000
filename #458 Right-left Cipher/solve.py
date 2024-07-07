s = input()
sz = len(s)
res = s[0] if (sz & 1) else ""
left, right = 0, sz - 1
if sz & 1:
  left = 1

turn = True
while left <= right:
  if turn:
    res = s[right] + res
    right -= 1
  else:
    res = s[left] + res
    left += 1
  turn = not turn
print(res)