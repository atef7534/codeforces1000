#include <algorithm>
#include <iostream>
#include <string>

int main(void) {
    std::string s; std::cin >> s;

    int cnt1 = std::count(s.begin(), s.end(), '1');
    int cnt0 = std::count(s.begin(), s.end(), '0');

    if (cnt1 > 0) {
        int ans = ((cnt0 + cnt1 - 1) / 2);
        if (cnt1 > 1 || (cnt0 + cnt1 - 1) % 2 == 1) {
            ans++;
        }
        std::cout << ans << "\n";
    } else {
        std::cout << "0\n";
    }
    return 0;
}