#include <iostream>
using namespace std;


int main(void) {
    int x; cin >> x;
    int ans = x / 5;
    if (x % 5) {
        ans++;
    }

    cout << ans << "\n";
    return 0;
}