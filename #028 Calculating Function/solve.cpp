#include <iostream>

int main(void) {
    long long n; std::cin >> n;
    if (n % 2 == 1) {
        std::cout << -1 * (n + 1) / 2 << "\n";
    } else {
        std::cout << n / 2 << "\n";
    }
    return 0;
}