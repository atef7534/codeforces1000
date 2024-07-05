#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

int main(void)
{
    int n;
    std::cin >> n;
    
    int mnA = std::numeric_limits<int>::min();
    for (int itr = 0; itr < n; itr++)
    {
        int tmp;
        std::cin >> tmp;
        mnA = std::max(mnA, tmp);
    }
    
    int m;
    std::cin >> m;
    
    int mnB = std::numeric_limits<int>::min();
    for (int itr = 0; itr < m; itr++)
    {
        int tmp;
        std::cin >> tmp;
        mnB = std::max(mnB, tmp);
    }
    
    std::cout << mnA << ' ' << mnB << '\n';
    return 0;
}

