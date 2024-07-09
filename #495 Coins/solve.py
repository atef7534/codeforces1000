n, s = map(int, input().split())
total = (s // n)
print(total + (s - total * n > 0))