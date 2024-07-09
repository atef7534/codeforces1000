t = int(input())
for _ in range(t):
  n = int(input())
  mylist = []
  if n & 1:
    for itr in range(n, 1, -2):
      mylist.extend([itr - 1, itr])
    mylist = mylist[::-1]
    print(1, *mylist)
  else:
    for itr in range(1, n + 1, 2):
      print(itr + 1, itr, end=" ")
    print()