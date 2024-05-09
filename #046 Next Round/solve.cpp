#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n, k; cin >> n >> k;
    vector<int> v(n); 
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    k = v[k - 1];

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] < k || !v[i]) {
            break;
        }
        ans++;
    }

    cout << ans << "\n";
    return 0;
}