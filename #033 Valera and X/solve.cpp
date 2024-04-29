#include <iostream>
#include <set>

using std::set;
using std::string;

int main(void) {
    int n; std::cin >> n;
    
    // for diagonals
    string s1 = "", s2 = "";

    // for the rest chars
    set<char> st1;

    set<char> st2;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            char c; std::cin >> c;
            if (j == i) {
                s1 += c;
                st2.insert(c);
            }
            if (j == n - 1 - i) {
                s2 += c;
                st2.insert(c);
                continue;
            } 
            if (j != i) {
                st1.insert(c);
            }
        }
    }

    if (s1.compare(s2) != 0 || st2.size() != 1 || st1.size() != 1 || st1.find(s1[0]) != st1.end()) {
        std::cout << "NO\n";
    } else {
        std::cout << "YES\n";
    }
    return 0;
}