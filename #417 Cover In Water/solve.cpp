#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
#include <cmath>
#include <string>
#include <set>


int main(void)
{
    int tests;
    std::cin >> tests;
    
    while (tests--)
    {
        int sz;
        std::cin >> sz;
        
        int tmp = 0, ans = 0;
        bool ok = true;
        for (int itr = 0; itr < sz; itr++)
        {
            char c;
            std::cin >> c;
            if (c == '#' || itr == sz - 1)
            {
                if (c == '.')
                {
                    ++tmp;
                }
                if (tmp <= 2)
                {
                    ans += tmp;
                }
                else
                {
                    ok = false;
                }
                tmp = 0;
            }
            else
            {
                ++tmp;
            }
        }
        std::cout << (ok ? ans : 2);
        std::cout << '\n';
    }
    return 0;
}
