#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
  int t; cin >> t;
  while (t--) {
    int n, m, r, c;
    cin >> n >> m >> r >> c;
    cout << max(n - r, r - 1) + max(m - c, c - 1) << '\n';
  }
  return 0;
}
