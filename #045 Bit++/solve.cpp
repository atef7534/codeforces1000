#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int tests; cin >> tests;
    int ans = 0;
    while (tests--) {
        string s; cin >> s;
        int found = count(s.begin(), s.end(), '+');

        if (found) {
            ans++;
        } else {
            ans--;
        }
    }
    cout << ans << "\n";

    return 0;
}