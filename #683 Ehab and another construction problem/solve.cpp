/**
 * author: atef_ai
 * created: 29 Jul 16:03
**/
#include <iostream>
int main(void) {
  int x;
  std::cin >> x;
  /* solution */
  if (!(x - 1)) std::cout << "-1\n";
  else std::cout << x << ' ' << x << '\n';
  return 0;
}