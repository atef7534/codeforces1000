/*
    author: atef_ai
    created: Jul 23 07:46
    problem: The String Has a Target
*/
#include <iostream>
#include <string>
int main(void) {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::string s;
        std::cin >> s;
        int mn = n - 1;
        for (int itr = n - 1; itr >= 0; itr--) {
            if (s[itr] < s[mn]) {
                mn = itr;
            }
        }
        std::cout << s[mn];
        for (int itr = 0; itr < n; itr++) {
            if (mn == itr) {
                continue;
            }
            std::cout << s[itr];
        }
        std::cout << '\n';
    }
    return 0;
}