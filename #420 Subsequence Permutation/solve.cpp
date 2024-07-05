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
        int size;
        std::cin >> size;
        
        std::string s;
        std::cin >> s;
        
        std::string newS = s;
        std::sort(newS.begin(), newS.end());
        
        int k = 0;
        for (int itr = 0; itr < size; itr++)
        {
            if (s[itr] != newS[itr])
            {
                k++;
            }
        }
        std::cout << k << '\n';
    }
    return 0;
}
