#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
#include <cmath>


int convertToNum(const std::vector<int>& bits);

int main(void)
{
    int tests;
    std::cin >> tests;
    
    while (tests--)
    {
        int n;
        std::cin >> n;
        if (n & 1)
        {
            std::cout << "-1\n";
        }
        else
        {
            std::vector<int> a, c;
            int mid = n / 2;
            
            while (mid)
            {
                a.push_back(1);
                if (mid & 1)
                {
                    c.push_back(0);
                }
                else
                {
                    c.push_back(1);
                }
                mid >>= 1;
            }
            int fa = convertToNum(a);
            int fc = convertToNum(c);
            std::cout << fa << ' ' << fa << ' ' << fc << '\n';
        }
    }
    return 0;
}


int convertToNum(const std::vector<int>& bits)
{
    int size = int(bits.size());
    int result = 0;
    for (int itr = 0; itr < size; itr++)
    {
        result += bits.at(itr) * (std::pow(2, itr));
    }
    return result;
}