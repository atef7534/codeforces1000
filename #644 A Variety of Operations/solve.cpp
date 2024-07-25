/**
 * author: atef_ai
 * created: 24 Jul
 */
#include <iostream>
int main(void)
{
  int t;
  std::cin >> t;
  while (t--) {
    int c, d;
    std::cin >> c >> d;
    if (c == d && !c) {
      std::cout << 0 << '\n';
    } else {
      if (c != d) {
        std::cout << (abs(c - d) & 1 ? -1 : 2) << '\n';
      } else {
        std::cout << 1 << '\n';
      }
    }
  }
  return 0;
}