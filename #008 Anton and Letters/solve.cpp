#include <algorithm>
#include <iostream>
#include <string>

int main(void) {
    std::string s;
    std::getline(std::cin, s);

    int arr[26] = {0};
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            arr[s[i] - 'a'] = 1;
        }
    }

    int cnt = std::count(arr, arr + 26, 1);
    std::cout << cnt << "\n";
    
    return 0;
}