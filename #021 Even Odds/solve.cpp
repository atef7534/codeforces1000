#include <iostream>
typedef long long ll;

int main(void) {
    ll k, n; std::cin >> k >> n;
    // special case
    if (k == 1 && k == n) {
        std::cout << 1 << "\n";
        return 0;
    }
    // pattern (odds, evens)
    if (!(k % 2) && (k == n)) { // even & equal
        std::cout << k << "\n";
    } else if ((k % 2) && (k == n)) { // odd & equal
        std::cout << k - 1 << "\n";
    } else {
        ll mid = ((k / 2) + (k % 2));
        if (n > mid) {
            n = n % mid;
            std::cout << 2 * n << "\n";
        } else {
            std::cout << 2 * n - 1 << "\n";
        }
    }
    return 0;
}