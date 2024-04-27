#include <algorithm>
#include <iostream>

int main(void) {
    int coins, sum = 0; std::cin >> coins;
    int arr[coins]; for (int i = 0; i < coins; i++) {
        std::cin >> arr[i];
        sum += arr[i];
    }

    std::sort(arr, arr + coins);

    int gift = 0;
    for (int i = coins - 1; i >= 0; i--) {
        gift += arr[i];
        if (gift > sum / 2) {
            std::cout << coins - i << "\n";
            break;
        }
    }
    return 0;
}
