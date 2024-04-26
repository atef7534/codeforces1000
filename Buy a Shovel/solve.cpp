#include <iostream>

int main(void) {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int price, m; std::cin >> price >> m;
    int x = 1;
    while ((price * x) % 10 != m && (price * x) % 10 != 0) {
        x++;
    }
    
    std::cout << x << "\n";
    return 0;
}