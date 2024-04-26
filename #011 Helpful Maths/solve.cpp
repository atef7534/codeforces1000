#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

int main(void) {
    std::string s; std::cin >> s;

    std::vector<int> v;
    int num = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '+') {
            v.push_back(num);
            num = 0;
        } else {
            num = num * 10 + (int)(s[i] - '0');
        }
    }
    if (num) {
        v.push_back(num);
    }

    std::sort(v.begin(), v.end());
    for (int i = 0, n = v.size(); i < n; i++) {
        if (i == n - 1) {
            break;
        }
        std::cout << v[i] << "+";
    }
    std::cout << v.back() << "\n";
    return 0;
}