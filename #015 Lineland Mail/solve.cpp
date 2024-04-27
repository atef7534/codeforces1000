#include <iostream>
#include <vector>

int main(void) {
    int size; std::cin >> size;
    std::vector<int> v; for (int i = 0; i < size; i++) {
        int x; std::cin >> x;
        v.push_back(x);
    }

    std::cout << abs(v.at(0) - v.at(1)) << " " << abs(v.at(0) - v.back()) << "\n";
    for (int i = 1; i < size - 1; i++) {
        int mn = std::min(abs(v.at(i) - v.at(i + 1)), abs(v.at(i) - v.at(i - 1)));
        int mx = std::max(abs(v.at(i) - v.front()), abs(v.at(i) - v.back()));
        std::cout << mn << " " << mx << "\n";
    }
    std::cout << abs(v.back() - v.at(size - 2)) << " " << abs(v.back() - v.at(0)) << "\n";
    return 0;
}