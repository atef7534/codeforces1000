/**
 * author: atef_ai
 * created: 25 Jul
 */
#include <iostream>
#include <algorithm>
#include <vector>
int main(void)
{
  int t;
  std::cin >> t;
  while (t--) {
    int a, b;
    std::cin >> a >> b;
    // solution
    std::cout << std::max(abs(a), abs(b)) * 2 - (abs(a) != abs(b)) << '\n';
  }
  return 0;
}