#include <iostream>
#include <numeric>

int main(void) {
    int yakko, wakko; std::cin >> yakko >> wakko;
    int mx = std::max(yakko, wakko);
    int prob = 6 - mx + 1;
    int gc = std::gcd(prob, 6);
    std::cout << prob / gc << "/" << 6 / gc << "\n";
    return 0;
}