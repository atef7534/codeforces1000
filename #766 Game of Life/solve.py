def solve():
    t = int(input())
    for _ in range(t):
        n, m = map(int, input().split())
        s = list(input())
        
        for _ in range(min(m, n)):
            new_s = s[:]
            for i in range(n):
                left = s[i - 1] if i > 0 else '0'
                right = s[i + 1] if i < n - 1 else '0'
                if s[i] == '0' and (left != right):
                    new_s[i] = '1'
            if new_s == s:
                break
            s = new_s
            
        print(''.join(s))

solve()
