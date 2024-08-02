/**
 * author: atef_ai
 * created: 29 Jul 15:57
**/
#include <iostream>
#include <vector>
#include <algorithm>
int main(void) {
  int t;
  std::cin >> t;
  while (t--) {
    int n, k;
    std::cin >> n >> k;
    /* solution */
    if (n == k) {
      for (int itr = 0; itr < n; itr++)
        std::cout << 1 << ' ';
      std::cout << '\n';
    } else if (k == 1) {
      for (int itr = 0; itr < n; itr++)
        std::cout << itr + 1 << ' ';
      std::cout << '\n';
    } else {
      std::cout << "-1\n";
    }
  }
  return 0;
}