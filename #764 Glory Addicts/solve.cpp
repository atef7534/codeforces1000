#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
  int t; cin >> t;
  while (t--) {
    int n, mx = 0; cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++)
      cin >> a[i];
    
    // Solution
    int res = 0;
    for (int i = 0; i < n; i++) {
      if ((n - i) & 1) res = max(res, a[i]);
    }
    cout << res << '\n';
  }
  return 0;
}