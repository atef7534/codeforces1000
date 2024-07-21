/*
  author: atef_ai
  created: 20 Jul 2024
  problem: Kevin and Permutation
*/
#include <iostream>
int main(void) {
  int t;
  std::cin >> t;
  while (t--) {
    int n, m;
    std::cin >> n;
    m = n / 2 + 1;
    for (int itr = m; itr < n + 1; itr++) {
      if (itr == n && n & 1) {
        break;
      }
      std::cout << itr << ' ' << itr - m + 1 << ' ';
    }
    if (n & 1) {
      std::cout << n;
    }
    std::cout << '\n';
  }
  return 0;
}