#include <iostream>
#include <string>

int main(void) {
    int n; std::cin >> n;
    int arr[4] = {8, 4, 2, 6};
    
    if (n == 0) {
        std::cout << "1\n";
    } else {
        int md = n % 4 == 0 ? 3 : n % 4 - 1;
        std::cout << arr[md] << "\n";
    }
    return 0;
}