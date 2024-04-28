#include <iostream>
#include <string>

int main(void) {
    int size; std::cin >> size;

    std::string s; std::cin >> s;
    int arr[size]; for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    char right = '\0';
    int c = 0;

    int mn = INT_MAX;
    for (int i = 0; i < size; i++) {
        if (right == '\0' && s[i] == 'L') {
            continue;
        } else if (s[i] == 'R') {
            right = 'R';
            c = arr[i];
        } else {
            mn = std::min(mn, abs(arr[i] - c));
            right = '\0';
        }
    }

    if (mn == INT_MAX) {
        std::cout << "-1\n";
    } else {
        std::cout << mn / 2 << "\n";
    }

    return 0;
}