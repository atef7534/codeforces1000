size = int(input())
arr = list(map(int, input().split()))

empty = [0] * (size + 1)
x = size

for i in arr:
    if i == x:
        print(x, end=" ")
        x -= 1
        while empty[x]:
            print(x, end=" ")
            x -= 1
    else:
        empty[i] = 1
    print()
