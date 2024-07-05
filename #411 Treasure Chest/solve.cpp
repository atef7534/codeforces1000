#include <iostream>

int main(void)
{
    int tests;
    std::cin >> tests;
    while (tests--)
    {
        int x, y, k;
        std::cin >> x >> y >> k;
        
        if (x <= y)
        {
            int seconds = x;
            if (!(y - x))
            {
                std::cout << seconds << '\n';
                continue;
            }
            int diff = (y - x);
            if (k >= diff)
            {
                std::cout << y << '\n';
            }
            else
            {
                std::cout << (diff * 2) - k + seconds << '\n';
            }
        }
        else
        {
            std::cout << x << '\n';
        }
        
    }
    return 0;
}
