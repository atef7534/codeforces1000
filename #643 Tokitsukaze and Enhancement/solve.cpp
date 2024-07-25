/**
 * author: atef_ai
 * created: 24 Jul
 */
#include <iostream>
int main(void)
{
  int n;
  std::cin >> n;
  if (n % 4 == 2) {
    std::cout << 1 << " B\n";
  }
  else {
    if (n % 4 == 0) {
      std::cout << 1;
    } else if (n % 4 == 1) {
      std::cout << 0;
    } else if (n % 4 == 3) {
      std::cout << 2;
    }
    std::cout << " A\n";
  }
  return 0;
}