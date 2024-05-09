#include <iostream>
using namespace std;

int main(void) {
    int n, k; cin >> n >> k;
    while (k--) {
        if (!(n % 10)) {
            n /= 10;
        } else {
            n --;
        }
    }

    cout << n << "\n";

    return 0;
}