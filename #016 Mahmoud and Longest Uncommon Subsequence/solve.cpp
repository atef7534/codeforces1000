#include <iostream>
#include <string>

int main(void) {
    std::string s1, s2; std::cin >> s1 >> s2;
    if (s1 == s2) {
        std::cout << "-1\n";
        return 0; // failed
    }

    std::cout << std::max(s1.size(), s2.size()) << "\n"; // success
    return 0;
}