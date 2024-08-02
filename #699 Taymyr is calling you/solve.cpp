/**
 * author: atef_ai
 * created: 1 Aug 17:11
**/
#include <iostream>
#include <algorithm>
int main(void) {
  int n, m, z;
  std::cin >> n >> m >> z;
  int x = (n * m) / std::__gcd(n, m);
  std::cout << (z / x) << '\n';
  return 0;
}