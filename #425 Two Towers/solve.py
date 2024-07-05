tests = int(input())

def getDup(mystring, length):
  mylist = []
  count = 1
  for itr in range(1, length):
    if mystring[itr] != mystring[itr - 1]:
      mylist.append(count)
      count = 0
    count += 1
  if count:
    mylist.append(count)
  return mylist

def moreThan(mylist, limit):
  for num in mylist:
    if num > limit:
      return True
  return False

for _ in range(tests):
  n, m = map(int, input().split())

  str1 = str(input())
  str2 = str(input())

  d1 = getDup(str1, n)
  d2 = getDup(str2, m)

  if moreThan(d1, 2) or moreThan(d2, 2):
    print("NO")
  else:
    c1 = d1.count(2)
    c2 = d2.count(2)

    if c1 + c2 > 1:
      print("NO")
    else:
      if not (c1 + c2 - 1):
        if str1[-1] == str2[-1]:
          print("NO")
        else:
          print("YES")
      else:
        print("YES")

  