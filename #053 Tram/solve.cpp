#include <iostream>
using namespace std;

int main(void) {
    int tests; cin >> tests;
    int ans = 0, capacity = 0;
    while (tests--) {
        int a, b; cin >> a >> b;
        capacity -= a;
        capacity += b;
        ans = max(ans, capacity);
    }

    cout << ans << "\n";
    return 0;
}