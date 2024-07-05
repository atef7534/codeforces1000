#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
    int tests;
    std::cin >> tests;
    while (tests--)
    {
        long long n;
        std::cin >> n;
        
        if (n <= 2)
        {
            std::cout << "1\n";
            continue;
        }
        long long tmp = (n + 1) / 2;
        long long res = (tmp * (tmp + 1));
        if (n & 1)
        {
            res -= tmp;
        }
        
        int left = 0, right = 1e9;
        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (1LL * mid * mid <= res)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        std::cout << right << '\n';
    }
    return 0;
}

