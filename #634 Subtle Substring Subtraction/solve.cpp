/*
    author: atef_ai
    created: Jul 23 07:54
    problem: Subtle Substring Subtraction
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int size = s.size();
        if (size == 1) {
            cout << "Bob " << s[0] - 'a' + 1 << '\n';
        } else {
            int scoreA = 0, scoreB = 0;
            for (char c : s) scoreA += c - 'a' + 1;
            if (size % 2 == 0) {
                cout << "Alice " << scoreA << '\n';
            } else {
                int first = s[0] - 'a' + 1, last = s.back() - 'a' + 1;
                cout << "Alice " << scoreA - 2 * min(first, last) << '\n';
            }
        }
    }
    return 0;
}
