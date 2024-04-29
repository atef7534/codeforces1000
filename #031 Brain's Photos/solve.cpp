#include <iostream>

int main(void) {
    int n, m; std::cin >> n >> m;

    bool color = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char c; std::cin >> c;
            if (c == 'C' || c == 'M' || c == 'Y') {
                color = true;
            }
        }
    }

    if (color) {
        std::cout << "#Color\n";
    } else {
        std::cout << "#Black&White\n";
    }

    return 0;
}