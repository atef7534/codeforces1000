/**
 * author: atef_ai
 * created: 24 Jul
 */
#include <iostream>
int main(void)
{
  int t;
  std::cin >> t;
  while (t--) {
    int l, r;
    std::cin >> l >> r;
    // solution
    std::cout << (2 * (r - l) >= r ? "NO\n" : "YES\n");
  }
  return 0;
}