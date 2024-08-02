/**
 * author: atef_ai
 * created: 26 Jul
 */
#include <iostream>
#include <vector>
int main(void) {
  int t;
  std::cin >> t;
  while (t--) {
    int n;
    std::cin >> n;
    /* solution */
    if (!(n & (n - 1)) || !(n & 1)) { // special case
      std::cout << -1 << '\n';
      continue;
    }
    std::vector<int> a;
    while (n != 1) {
      int x = n / 2;
      if (!(x & 1)) {
        a.push_back(1);
        n = x + 1;
      } else {
        a.push_back(2);
        n = x;
      }
    }
    int size = (int)a.size();
    if (size <= 40) {
      std::cout << size << '\n';
      for (auto itr = a.rbegin(); itr != a.rend(); itr++) {
        std::cout << (*itr) << ' ';
      }
      std::cout << '\n';
    }
  }
  return 0;
}
/*
  two operations
  1. 2x - 1
  2. 2x + 1
*/