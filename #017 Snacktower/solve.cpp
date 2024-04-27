#include <iostream>

int main(void) {
    int size; std::cin >> size;
    int arr[size + 1]; for (int i = 1; i <= size; i++) {
        std::cin >> arr[i];
    } 

    int can[size + 1] = {0}, x = size;
    for (int i = 1; i <= size; i++) {
        if (arr[i] == x) {
            std::cout << x << " ";
            x --;
            while (can[x]) {
                std::cout << x-- << " ";
            }
        } else {
            can[arr[i]] = 1; 
        }
        std::cout << "\n";
    }
    return 0;
}