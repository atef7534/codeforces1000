/**
 * author: atef_ai
 * created: 31 Jul 17:10
**/
#include <iostream>
#include <algorithm>
#include <vector>
int main(void) {
  int t; std::cin >> t;
  while (t--) {
    int n; std::cin >> n;
    /* solution */
    std::vector<int> a(4, 0);
    for (int itr = 0; itr < n; itr++) {
      int x, y; std::cin >> x >> y;
      a.at(0) |= (x > 0);
      a.at(1) |= (x < 0);
      a.at(2) |= (y > 0);
      a.at(3) |= (y < 0);
    }
    int s = 0;
    for (int itr = 0; itr < 4; itr++)
      s += a.at(itr);
    std::cout << (s < 4 ? "YES\n" : "NO\n");
  }
  return 0;
}