#include <iostream>
#include <string>

int main(void) {
    std::string stone, ins;
    std::cin >> stone >> ins;

    int pos = 0;
    for (int i = 0; ins[i] != '\0'; i++) {
        if (stone[pos] == '\0') {
            std::cout << pos << "\n";
            return 0;
        }
        if (stone[pos] == ins[i]) {
            pos++;
        }
    }

    std::cout << pos + 1 << "\n";
    return 0;
}
