from collections import Counter
n = int(input())
count = Counter()
st = set()
for _ in range(n):
    x = input()
    count[x] += 1
    st.add(x)

if len(st) == 1:
    print(st.pop())
else:
    team1, team2 = st.pop(), st.pop()
    if count[team1] > count[team2]:
        print(team1)
    else:
        print(team2)
