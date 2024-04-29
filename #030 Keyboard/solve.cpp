#include <iostream>

int main(void) {
    std::string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char c; std::cin >> c;

    std::string in; std::cin >> in;
    for (int i = 0, n = in.size(); i < n; i++) {
        int index = s.find(in[i]);
        if (c == 'R') {
            std::cout << s[index - 1];
        } else {
            std::cout << s[index + 1];
        }
    }
    std::cout << "\n";

    return 0;
}