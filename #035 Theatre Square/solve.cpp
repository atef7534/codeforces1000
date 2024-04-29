#include <iostream>

typedef long long ll;

int main(void) {
    ll n, m, a; std::cin >> n >> m >> a;

    ll md1 = n / a;
    if (n % a) {
        md1++;
    }

    ll md2 = m / a;
    if (m % a) {
        md2++;
    }

    std::cout << md1 * md2 << "\n";
    return 0;
}