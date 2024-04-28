n, t = map(int, input().split())

if t > n:
    print(-1)
else:
    x = 10 ** (n - 1)
    print(x + t - (x % t))