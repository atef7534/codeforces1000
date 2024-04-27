n = int(input())
q = list(map(int, input().split()))[1:] + list(map(int, input().split()))[1:]


arr = [0] * (n + 1)
for i in q:
    arr[i] = 1

valid = True
for i in range(1, n + 1):
    if not arr[i]:
        valid = False
        break

if valid:
    print("I become the guy.")
else:
    print("Oh, my keyboard!")