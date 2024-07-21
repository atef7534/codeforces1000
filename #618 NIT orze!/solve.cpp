/*
  author: atef_ai
  created: 20 Jul 2024
  problem: NIT orz!
*/
#include <iostream>
#include <vector>
#include <algorithm>
int main(void) {
  int t;
  std::cin >> t;
  while (t--) {
    int n, z, mx;
    std::cin >> n >> z;
    mx = z;
    std::vector<int> a(n, 0);
    for (int itr = 0; itr < n; itr++) {
      std::cin >> a.at(itr);
      mx = std::max(mx, (a.at(itr) | z));
    }
    std::cout << mx << '\n';
  }
  return 0;
}