#include <iostream>
#include <string>

int main(void) {
    int nums, k, answer = 0; std::cin >> nums >> k;
    while (nums--) {
        std::string s; std::cin >> s;
        int count[10] = {0};
        for (int i = 0; s[i] != '\0'; i++) {
            count[s[i] - '0']++;
        }

        int j;
        for (j = 0; j <= k; j++) {
            if (count[j] == 0) {
                break;
            }
        }

        if (j > k) {
            answer++;
        }
    }

    std::cout << answer << "\n";
    return 0;
}