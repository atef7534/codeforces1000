import sys

n = int(input())
i = 0

dia1, dia2, rest = "", "", ""

for _ in range(n):
    s = input()
    for j in range(n):
        if j != n - i - 1 and j != i:
            rest += s[j]
    dia1 += s[i]
    dia2 += s[n - i - 1]
    i += 1

if dia1 != dia2:
    print("NO")
    sys.exit(0)

st_rest = set(rest)
st = set(dia1 + dia2)
comb = st_rest.intersection(st)

if comb or len(st_rest) > 1 or len(st) > 1:
    print("NO")
else:
    print("YES")
