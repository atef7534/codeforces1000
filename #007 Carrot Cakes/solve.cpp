#include <iostream>

int main(void) {
    int n, t, k, d; std::cin >> n >> t >> k >> d;

    for (int i = 1; n > 0 && d != 0; i++) {
        if (t == 1) {
            n -= k;
        } else {
            if (i % t == 0 && i != 1) {
                n -= k;
            }
        }
        d--;
    }
    if (n > k) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
    return 0;
}