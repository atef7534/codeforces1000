#include <iostream>

typedef long long LL;

int main(void) {
    LL l, r; std::cin >> l >> r;
    if (r % 2 == 1) {
        r--;
    }
    if (l % 2 == 1) {
        l++;
    }
    if (r <= l) {
        std::cout << "-1\n";
    } else {
        std::cout << l << " " << l + 1 << " " << l + 2 << "\n";
    }
    return 0;
}