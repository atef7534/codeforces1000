from math import gcd

tests = int(input())
for _ in range(tests):
    x = int(input())
    mx = 0
    ans = 0
    for i in range(1, x):
        gc = gcd(x, i)
        if gc + i > mx:
            mx = gc + i
            ans = i
    print(ans)