#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
  int t; cin >> t;
  while (t--) {
    int x, y, k;
    cin >> x >> y >> k;
    if (!(k & 1)) {
      cout << k * x + 1 << ' ' << k * y + 1 << '\n';
      cout << "-1 -1\n";
      k -= 1;
    } else {
      cout << k * x << ' ' << k * y << '\n';
    }
    int l = 2, r = -2;
    for (int i = 0; i + 1 < k; i += 2) {
      cout << l << ' ' << r << '\n';
      cout << -l << ' ' << -r << '\n';
      l++, r--;
    }
  }
  return 0;
}
