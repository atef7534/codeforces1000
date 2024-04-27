#include <iostream>
#include <map>

int main(void) {
    int n; std::cin >> n;
    int mn = INT_MAX, mx = INT_MIN;
    std::map<int, int> freqs;
    int arr[n]; for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
        mn = std::min(mn, arr[i]);
        mx = std::max(mx, arr[i]);
        freqs[arr[i]]++;
    }
    
    if (mn == mx) {
        std::cout << "0\n";
    } else {
        std::cout << n - (freqs[mn] + freqs[mx]) << "\n";
    }
    return 0;
}