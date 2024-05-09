#include <iostream>
using namespace std;

typedef long long LL;

int main(void) {
    LL n; cin >> n;
    int count = 0;
    while (n) {
        count += n % 10 == 4 || n % 10 == 7 ? 1 : 0;
        n /= 10;
    }

    if (count == 4 || count == 7) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}