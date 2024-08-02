/**
 * author: atef_ai
 * created: 31 Jul 16:32
**/
#include <iostream>
#include <algorithm>
int main(void) {
  int n; std::cin >> n;
  /* solution */
  if (n & 1) std::cout << n / 2 << ' ' << (n + 1) / 2 << '\n';
  else {
    if ((n / 2) & 1) std::cout << n / 2 - 2 << ' ' << n / 2 + 2 << '\n';
    else std::cout << n / 2 - 1 << ' ' << n / 2 + 1 << '\n';
  }
  return 0;
}