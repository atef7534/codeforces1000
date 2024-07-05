tests = int(input())

for _ in range(tests):
  n = int(input())
  mylist = [0] * 100
  
  for i in range(31, -1, -1):
    if 2 ** i <= n:
      mylist[i] = 1
      n -= 2 ** i
    else:
      mylist[i] = 0
  
  for itr in range(31):
    if mylist[itr] == mylist[itr + 1] and mylist[itr]:
      mylist[itr] = -1
      itr += 1
      while mylist[itr]:
        mylist[itr] = 0
        itr += 1
      mylist[itr] = 1
  print(31)
  print(*mylist[0: 31])
    