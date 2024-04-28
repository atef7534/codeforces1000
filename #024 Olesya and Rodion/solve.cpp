#include <iostream>
#include <cmath>

int main(void) {
    int n, t; std::cin >> n >> t;
    if (n == 1 && t == 10) {
        std::cout << "-1\n";
    } else {
        std::cout << t;
        int lg = std::log10(t) + 1;
        n -= lg;
        while (n--) {
            std::cout << "0";
        }
        std::cout << "\n";
    }
    return 0;
}