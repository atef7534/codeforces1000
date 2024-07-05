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
        int n, k;
        std::cin >> n >> k;
        
        int limit = (n + 1) / 2;
        if (k > limit)
        {
            std::cout << "-1\n";
        }
        else
        {
            int current = 0;
            for (int itr = 0; itr < n; itr++)
            {
                bool notP = true;
                for (int itrj = 0; itrj < n; itrj++)
                {
                    if (!(itr & 1) && itrj == current && k && notP)
                    {
                        std::cout << "R";
                        k--;
                        current += 2;
                        notP = false;
                    }
                    else
                    {
                        std::cout << ".";
                    }
                }
                std::cout << '\n';
            }
        }
    }
    return 0;
}
