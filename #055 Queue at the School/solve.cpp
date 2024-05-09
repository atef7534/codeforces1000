#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int size, t; cin >> size >> t;
    string s; cin >> s;

    while (t--) {
        for (int i = 0; i < size - 1; i++) {
            if (s[i] == 'B' && s[i + 1] == 'G') {
                s[i] = 'G', s[i + 1] = 'B';
                i++;
            }
        }
    }

    cout << s << "\n";
    return 0;
}