#include <iostream>
#include <cmath>

int get_next_prime(int n) {
    for (int i = n + 1; i <= 49; i++) {
        int limit = std::sqrt(i) + 1;

        bool prime = true;
        for (int j = 2; j <= limit; j++) {
            if (i % j == 0) {
                prime = false;
                break;
            }
        }

        if (prime) {
            return i;
        }
    }
    return 53;
}
int main(void) {
    int n, m; std::cin >> n >> m;
    int next_prime = get_next_prime(n);

    if (next_prime == m) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }

    return 0;
}