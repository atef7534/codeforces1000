#include <iostream>
#include <string>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;

    std::vector<int> a;
    int tmp = 0;

    for (char c : s) {
        if (c == 'W') {
            if (tmp) a.push_back(tmp);
            tmp = 0;
        } else {
            tmp++;
        }
    }
    if (tmp) a.push_back(tmp);

    std::cout << a.size() << '\n';
    for (int x : a) std::cout << x << ' ';
    std::cout << '\n';

    return 0;
}
