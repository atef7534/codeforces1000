/**
 * author: atef_ai
 * created: 29 Jul 15:25
**/
#include <iostream>
#include <vector>
#include <algorithm>
int main(void) {
  int t;
  std::cin >> t;
  while (t--) {
    int n, k1, k2;
    std::cin >> n >> k1 >> k2;
    /* solution */
    int mx1 = 0, mx2 = 0;
    for (int itr = 0; itr < k1; itr++) {
      int tmp; std::cin >> tmp;
      mx1 = std::max(mx1, tmp);
    }
    for (int itr = 0; itr < k2; itr++) {
      int tmp; std::cin >> tmp;
      mx2 = std::max(mx2, tmp);
    }
    std::cout << (mx1 > mx2 ? "YES\n" : "NO\n");
  }
  return 0;
}