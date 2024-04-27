#include <iostream>

int main(void) {
    int n, arr[n + 1] = {0}; std::cin >> n;

    int p, q; std::cin >> p;
    while (p--) {
        int t; std::cin >> t;
        arr[t] = 1;
    }

    std::cin >> q;
    while (q--) {
        int t; std::cin >> t;
        arr[t] = 1;
    }

    bool valid = true;
    for (int i = 1; i <= n; i++) {
        if (!arr[i]) {
            valid = false;
            break;
        }
    }

    if (valid) {
        std::cout << "I become the guy.\n";
    } else {
        std::cout << "Oh, my keyboard!\n";
    }
    return 0;   
}