from collections import Counter

t = int(input())

for _ in range(t):
  boss, attack = map(int, input().split())

  arr1 = list(map(int, input().split()))
  arr2 = list(map(int, input().split()))

  arr1 = sorted(arr1)

  power = sum(arr1[-attack:])
  ans = 1

  boss -= power
  m = 0
  while boss > 0:
    power = 0
    i = -1
    tk = attack
    done = False

    while i >= -len(arr1) and tk:
      if arr1[i] == arr2[m] and not done:
        done = True
      else:
        power += arr1[i]
        tk -= 1
      i -= 1
    boss -= power
    print(power)
    m += 1
    ans += 1
  print(ans)


  
    
