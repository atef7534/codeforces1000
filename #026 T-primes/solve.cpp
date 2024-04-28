#include <cmath>
#include <iostream>
#include <vector>
typedef long long ll;

int main(void) {
    int tests; std::cin >> tests;
    ll nums[tests]; for (int i = 0; i < tests; i++) {
        std::cin >> nums[i];
    }

    int limit = 1000001;
    std::vector<bool> arr(limit, true);
    arr[0] = false;
    arr[1] = false;


    for (int i = 2; i < int(std::sqrt(limit)) + 1; i++) {
        if (arr[i]) {
            for (int j = i * i; j < limit; j += i) {
                arr[j] = false;
            }
        }
    }

    for (int i = 0; i < tests; i++) {
        ll sq = std::sqrt(nums[i]);
        if (arr[sq] && sq * sq == nums[i]) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
}