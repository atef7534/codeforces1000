#include <iostream>

int main(void) {
    int n; std::cin >> n;
    int arr[n]; for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int m; std::cin >> m;
    while (m--) {
        int xi, yi; std::cin >> xi >> yi;
        if (xi > 1 && xi < n) {
            arr[xi - 2] += yi - 1;
            arr[xi] += arr[xi - 1] - yi;
        } else if (xi == 1) {
            arr[xi] += arr[xi - 1] - yi;
        } else {
            arr[xi - 2] += yi - 1;
        }
        arr[xi - 1] = 0;
    }

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << "\n";
    }

    return 0;
}