/*
 * author: atef_ai
 * created: 27 Jul
 */
#include <iostream>
#include <cmath>
#include <algorithm>
int main(void) {
  int t;
  std::cin >> t;
  while (t--) {
    int x, y;
    std::cin >> x >> y;
    /* solution */
    if (x == 1 || y == 1) {
      std::cout << "1\n";
      std::cout << x << ' ' << y << '\n';
    } else {
      if (std::__gcd(x, y) > 1) {
          std::cout << "2\n";
          std::cout << x - 1 << ' ' << "1\n";
          std::cout << x << ' ' << y << '\n';
        
      } else {
        std::cout << "1\n";
        std::cout << x << ' ' << y << '\n';
      }
    }
  }
  return 0;
}