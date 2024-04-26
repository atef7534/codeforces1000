#include <iostream>

int main(void) {
    int a, b; std::cin >> a >> b;
    for (int i = 0; i < 26 && b != 0; i++) {
        std::cout << (char)('a' + i);
        a--;
        b--;
    }
    bool turn = 0;
    while (a) {
        std::cout << (char)('a' + turn);
        turn = !turn;
        a--;
    }
    std::cout << "\n";
    return 0;
}