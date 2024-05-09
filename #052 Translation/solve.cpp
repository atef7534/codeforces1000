#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string s, r; cin >> s >> r;
    reverse(s.begin(), s.end());

    if (s.compare(r) == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}