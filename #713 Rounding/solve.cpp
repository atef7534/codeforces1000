/**
 * author: atef_ai
 * created: 3 Aug 15:43
**/
#include <iostream>
int main(void) {
  int n;
  std::cin >> n;
  std::cout << (n - (n % 10) + (n % 10 >= 5 ? 10 : 0)) << '\n';
  return 0;
}