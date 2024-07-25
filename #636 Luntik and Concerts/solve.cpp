/**
 * author: atef_ai
 * created: 23 Jul 06:49
 * problem: Luntik and Concerts
 */
#include <iostream>
#include <algorithm>
int main(void)
{
    int t;
    std::cin >> t;
    while (t--) {
        long long x, y, z;
        std::cin >> x >> y >> z;
        std::cout << (x + y * 2 + z * 3) % 2 << '\n';
    }
}