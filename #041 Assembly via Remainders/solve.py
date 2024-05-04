tests = int(input())

for _ in range(tests):
    size = int(input())
    arr = list(map(int, input().split()))[::-1]

    ans = [1000001]
    for i in arr:
        ans += [ans[-1] - i]
    print(*ans[::-1])