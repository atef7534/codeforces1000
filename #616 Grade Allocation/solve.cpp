/*
  author: atef_ai
  created: 20 Jul 2024
  problem: Grade Allocation
*/
#include <iostream>
int main(void) {
  int t;
  std::cin >> t;
  while (t--) {
    int n, m, s = 0;
    std::cin >> n >> m;
    for (int itr = 0; itr < n; itr++) {
      int tmp;
      std::cin >> tmp;
      s += tmp;
    }
    std::cout << std::min(s, m) << '\n';
  }
  return 0;
}