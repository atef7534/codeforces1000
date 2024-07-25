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
    int n;
    std::cin >> n;
    // solution
    std::cout << (n + 4) / 5 + (5 * ((n + 4) / 5) == n) << '\n';
  }
  return 0;
}
