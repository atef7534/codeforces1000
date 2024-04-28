#include <iostream>

int main(void) {
    int participants; std::cin >> participants;
    
    int mn = INT_MAX, rated = 0, unrated = 0;
    for (int i = 0; i < participants; i++) {
        int x, y; std::cin >> x >> y;
        if (x != y) {
            rated = 1;
        }
        
        if (mn < x) {
            unrated = 1;
        }
        mn = std::min(mn, x);
    }

    if (rated) {
        std::cout << "rated\n";
    } else if (unrated) {
        std::cout << "unrated\n";
    } else {
        std::cout << "maybe\n";
    }
    return 0;
}