/**
 * author: atef_ai
 * created: 26 Jul
 */
#include <iostream>
#include <vector>
int main(void) {
  int x, y, z, mx = 0;
  std::cin >> x >> y >> z;
  /* solution */
  for (int itr = 1; itr <= x; itr++) {
    if (3 * itr + 3 <= x + y + z && itr <= x && itr + 1 <= y && itr + 2 <= z) {
      mx = std::max(mx, 3 * itr + 3);
    }
  }
  std::cout << mx << '\n';
  return 0;
}
/*
  x
  x + 1
  x + 2
  3x + 3 = one + two + three
*/