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
        int sz, k;
        std::cin >> sz >> k;
        
        std::string s;
        std::cin >> s;
        
        std::set<std::string> st;
        std::string t = s;
        std::reverse(t.begin(), t.end());
        
        if (k == 0 || !t.compare(s))
        {
            std::cout << "1\n";
        }
        else
        {
            std::cout << "2\n";
        }
    }
    return 0;
}
