/*
  author: atef_ai
  created: 20 Jul 2024
  problem: Two Friends
*/
#include <iostream>
#include <vector>
int main(void) {
  int t;
  std::cin >> t;
  while (t--) {
    int n;
    std::cin >> n;
    std::vector<int> a(n, 0);
    for (int itr = 0; itr < n; itr++) {
      std::cin >> a.at(itr);
    }
    bool ok = false;
    for (int itr = 0; itr < n; itr++) {
      ok |= (a.at(a.at(itr) - 1) == itr + 1);
    }
    std::cout << 2 + !ok << '\n';
  }
  return 0;
}