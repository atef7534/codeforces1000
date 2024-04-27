#include <iostream>
#include <string>

int main(void) {
    int size; std::cin >> size;
    std::string s; std::cin >> s;

    int can[26] = {0};
    if (size < 26) {
        std::cout << "NO\n";
    } else {
        for (int i = 0; i < size; i++) {
            char low = tolower(s[i]);
            can[(int)(low - 'a')] = 1;
        }
        for (int i = 0; i < 26; i++) {
            if (!can[i]) {
                std::cout << "NO\n";
                return 0;
            }
        }
        std::cout << "YES\n";
    }
    return 0;
}