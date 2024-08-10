#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
  int l, r, a;
  cin >> l >> r >> a;
  if (!r && !a || !l && !a) { cout << 0 << '\n'; return 0; }
  if (l > r) swap(l, r);
  int rest = max(0, a + l - r);
  l = min(r, a + l);
  cout << l * 2 + rest - (rest & 1) << '\n';
  return 0;
}
