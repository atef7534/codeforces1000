#include <iostream>
#include <vector>
using namespace std;


int main(void) {
    int tests; cin >> tests;
    while (tests--) {
        int size; cin >> size;
        vector<int> freqs(101, 0), nums(size);
        int ans = 0;
        for (int i = 0; i < size; i++) {
            cin >> nums[i];
            freqs[nums[i]]++;
        }
        for (int i = 0; i < size; i++) {
            if (freqs[nums[i]] == 1) {
                cout << i + 1 << "\n";
                break;
            }
        }
    }

    return 0;
}