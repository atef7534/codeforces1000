#include <iostream>
#include <string>

int main(void) {
    int tests; std::cin >> tests;
    while (tests--) {
        std::string s; std::cin >> s;
        int size = s.size();
        if (size > 10) {
            std::cout << s[0] << size - 2 << s[size - 1] << "\n";
        } else {
            std::cout << s << "\n";
        }
    }
    return 0;
}