#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(void) {
  int a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;
  int pe = min(a, d) * e;
  int pf = min({b, c, d}) * f;

  cout << max(
    pe + min({b, c, d - min(a, d)}) * f,
    pf + min(a, d - min({b, c, d})) * e
  ) << '\n';
  return 0;
}
