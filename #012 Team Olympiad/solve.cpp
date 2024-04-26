#include <algorithm>
#include <iostream>
#include <vector>

int main(void) {
    int n; std::cin >> n;
    
    std::vector<std::vector<int>> v(4);
    int a = 0, b = 0, c = 0;
    for (int i = 1; i <= n; i++) {
        int x; std::cin >> x;
        v[x].push_back(i);
        if (x == 1) {
            a++;
        } else if (x == 2) {
            b++;
        } else {
            c++;
        }
    }

    int count = std::min(a, std::min(b, c));
    if (count == 0) {
        return std::cout << "0\n", 0;
    }
    std::cout << count << "\n";
    while (count) {
        std::cout << v[1].back() << " " << v[2].back() << " " << v[3].back() << "\n";
        v[1].pop_back(); v[2].pop_back(); v[3].pop_back();
        count--;
    }
    return 0;
}