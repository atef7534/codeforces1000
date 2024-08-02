/**
 * author: atef_ai
 * created: 26 Jul
 */
#include <iostream>
#include <algorithm>
#include <vector>
int main(void)
{
  int t;
  std::cin >> t;
  while (t--) {
    int x, y;
    std::cin >> x >> y;
    /* solution */
    bool found = false;
    for (int itr = 0; itr <= 50; itr++) {
      for (int itrj = 0; itrj <= 50; itrj++) {
        if (abs(itr - x) + abs(itrj - y) == itr + itrj) {
          found = true;
          std::cout << itr << ' ';
          std::cout << itrj << '\n';
          break;
        }
      }
      if (found)
        break;
    }
    if (!found)
      std::cout << -1 << ' ' << -1 << '\n';
  }
  return 0;
}