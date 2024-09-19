#include <iostream>
#include <vector>
using namespace std;

int main(void) {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++)
      cin >> a[i];
    
    // Solution
    string res = "YES\n";
    vector<int> b(200002, 0);
    b[a[0]] = 1;
    for (int i = 1; i + 1 < n; i++) {
      if (b[a[i] + 1] || b[a[i] - 1]) { b[a[i]] = 1; continue; }
      res = "NO\n";
    }
    cout << res;
  }
  return 0;
}