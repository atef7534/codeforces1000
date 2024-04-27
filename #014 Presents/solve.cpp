#include <iostream>

int main(void) {
    int n; std::cin >> n;
    int arr[n + 1]; for (int i = 1; i <= n; i++) {
        int x; std::cin >> x;
        arr[x] = i;
    }
    for (int i = 1; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << arr[n] << "\n";
    return 0;
}