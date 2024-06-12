size = int(input())
array = list(map(int, input().split()))

chest = sum([array[i] for i in range(0, size, 3)])
biceps = sum([array[i] for i in range(1, size, 3)])
back = sum([array[i] for i in range(2, size, 3)])

print(chest, biceps, back)

if max([chest, biceps, back]) == chest:
  print("chest")
elif max([chest, biceps, back]) == biceps:
  print("biceps")
else:
  print("back")