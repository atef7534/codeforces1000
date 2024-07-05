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
        int size, m;
        std::cin >> size >> m;
        
        std::vector<int> nums(size, 0);
        std::string s(m, 'B');
        
        for (int itr = 0; itr < size; itr++)
        {
            std::cin >> nums.at(itr);
        }
        
        for (int itr = 0; itr < size; itr++)
        {
            int tmx = std::max(nums.at(itr) - 1, m - nums.at(itr));
            int tmn = std::min(nums.at(itr) - 1, m - nums.at(itr));
            if (s[tmn] == 'B')
            {
                s[tmn] = 'A';
            }
            else
            {
                s[tmx] = 'A';
            }
        }
        std::cout << s << '\n';
    }
    return 0;
}
