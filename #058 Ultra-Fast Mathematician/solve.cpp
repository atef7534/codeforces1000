#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string s1, s2; cin >> s1 >> s2;

    string ans = "";
    for (int i = 0, n = s1.size(); i < n; i++) {
        if (s1[i] != s2[i]) {
            ans += '1';
        } else {
            ans += '0';
        }
    }

    cout << ans << "\n";
    return 0;
}