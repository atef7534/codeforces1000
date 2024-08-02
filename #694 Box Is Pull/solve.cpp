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
    int x1, y1, x2, y2;
    std::cin >> x1 >> y1;
    std::cin >> x2 >> y2;
    /* solution */
    if (x1 == x2 && y1 == y2) std::cout << "0\n";
    else if ((x1 == x2) || (y1 == y2)) std::cout << std::max(abs(x1 - x2), abs(y1 - y2)) << '\n';
    else std::cout << abs(x1 - x2) + abs(y1 - y2) + 2 << '\n';
  }
  return 0;
}