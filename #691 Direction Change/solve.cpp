/**
 * author: atef_ai
 * created: 31 Jul 14:30
**/
#include <iostream>
int main(void) {
  int t; std::cin >> t;
  while (t--) {
    int n, m; std::cin >> n >> m;
    /* solution */
    if ((!(n - 1) || !(m - 1)) && (n > 2 || m > 2)) std::cout << "-1\n";
    else {
      int mx = std::max(n, m),
          mn = std::min(n, m) - 1;
      int res = 2 * mn;
      mn++;
      std::cout << 2 * (mx - mn) - (n&1 ^ m&1) + res << '\n';
    }
  }
  return 0;
}
