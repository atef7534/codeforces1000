#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
#include <cmath>
#include <string>
#include <set>

int findMin(const std::vector<int>& a, int val);

int main(void)
{
    int tests;
    std::cin >> tests;
    
    while (tests--)
    {
        std::string s;
        std::cin >> s;
        
        std::vector<int> a(10, 0);
        int size = int(s.size());
        
        for (int itr = 0; itr < size; itr++)
        {
            int t = int(s[itr] - '0');
            ++a.at(t);
        }
        
        int mn = findMin(a, -1);
        if (!(size - 2) && int(s[0] - '0') == mn && !(a.at(mn) - 1))
        {
            mn = findMin(a, mn);
        }
        std::cout << mn << '\n';
    }
    return 0;
}

int findMin(const std::vector<int>& a, int val)
{
    for (int itr = 1; itr < 10; itr++)
    {
        if (a.at(itr) && itr > val)
        {
            return itr;
        }
    }
    return 0;
}
