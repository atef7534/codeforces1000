def getAllPrimes(limit):
    sieve = [True] * (limit + 1)
    sieve[0] = sieve[1] = False

    for i in range(2, int(limit ** 0.5) + 1):
        if sieve[i]:
            for j in range(i * i, limit + 1, i):
                sieve[j] = False
    
    return sieve

tests = int(input())

nums = list(map(int, input().split()))
limit = int(10 ** 6 + 1)
primes = getAllPrimes(limit)

for num in nums:
    sq = int(num ** 0.5)
    if sq ** 2 == num and primes[sq]:
        print("YES")
    else:
        print("NO")