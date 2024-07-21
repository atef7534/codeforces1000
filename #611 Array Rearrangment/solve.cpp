/*
  author: atef_ai
  created: 20 Jul 2024
  problem: Array Rearrangment
*/
#include <iostream>
#include <vector>
#include <algorithm>
int main(void) {
  int t;
  std::cin >> t;
  while (t--) {
    int n, x;
    std::cin >> n >> x;
    std::vector<int> a(n, 0), b(n, 0);
    for (int itr = 0; itr < n; itr++) {
      std::cin >> a.at(itr);
    }
    for (int itr = 0; itr < n; itr++) {
      std::cin >> b.at(itr);
    }
    std::vector<int> c(n, 0);
    for (int itr = 0; itr < n; itr++) {
      c.at(itr) = a.at(itr) + b.at(n - itr - 1);
    }
    bool ok = true;
    for (int itr = 0; itr < n; itr++) {
      ok &= (c.at(itr) <= x);
    }
    std::cout << (ok ? "YES\n" : "NO\n");
  }
  return 0;
}