/**
 * author: atef_ai
 * created: 26 Jul
 */
#include <iostream>
int main(void) {
  int t;
  std::cin >> t;
  while (t--) {
    int n, m;
    std::cin >> n >> m;
    int x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;
    /* solution */
    if (x1 == 1) {
      if (y1 == 1 || y1 == m) {
        std::cout << 2 << '\n';
        continue;
      }
    }
    if (x2 == 1) {
      if (y2 == 1 || y2 == m) {
        std::cout << 2 << '\n';
        continue;
      }
    }
    if (x1 == n) {
      if (y1 == 1 || y1 == m) {
        std::cout << 2 << '\n';
        continue;
      }
    }
    if (x2 == n) {
      if (y2 == 1 || y2 == m) {
        std::cout << 2 << '\n';
        continue;
      }
    }
    if (!(x1 - 1) || !(x2 - 1) || !(y1 - 1) || !(y2 - 1) || x1 == n || x2 == n || y1 == m || y2 == m) {
      std::cout << 3 << '\n';
      continue;
    }
    std::cout << 4 << '\n';
  }
  return 0;
}