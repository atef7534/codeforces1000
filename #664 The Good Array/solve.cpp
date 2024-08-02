/**
 * author: atef_ai
 * created: 26 Jul
 */
#include <iostream>
int main(void) {
  int t;
  std::cin >> t;
  while (t--) {
    int n, k;
    std::cin >> n >> k;
    /* solution */
    int all = (n + k - 2) / k;
    std::cout << all + 1 << '\n';
  }
  return 0;
}