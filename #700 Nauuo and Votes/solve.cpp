/**
 * author: atef_ai
 * created: 2 Aug 14:55
**/
#include <iostream>
#include <algorithm>
int main(void) {
  int x, y, z;
  std::cin >> x >> y >> z;
  if (x > y + z) std::cout << "+\n";
  else {
    if (y > x + z) std::cout << "-\n";
    else {
      if (x == y && !z) std::cout << "0\n";
      else std::cout << "?\n";
    }
  }
  return 0;
}