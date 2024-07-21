/*
  author: atef_ai
  created: 20 Jul 2024
  problem: Find Divisible
*/
#include <iostream>
int main(void) {
  int t;
  std::cin >> t;
  while (t--) {
    int l, r;
    std::cin >> l >> r;
    std::cout << l << ' ' << r - (r % l) << '\n';
  }
  return 0;
}