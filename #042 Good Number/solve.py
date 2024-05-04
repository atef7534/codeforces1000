nums, k = map(int, input().split())
answer = 0

for _ in range(nums):
    s = input()
    c = [0] * 10
    for i in s:
        c[ord(i) - ord('0')] += 1
    j = 0
    while j <= k:
        if c[j] == 0:
            break
        j += 1
    if j > k:
        answer += 1
print(answer)
