/*
  author: atef_ai
  created: 20 Jul 2024
  problem: Array Balancing
*/
#include <iostream>
#include <vector>
#include <algorithm>
int main(void) {
  int t;
  std::cin >> t;
  while (t--) {
    int n;
    std::cin >> n;
    std::vector<std::pair<int, int>> a(n);
    for (int itr = 0; itr < n; itr++) {
      std::cin >> a.at(itr).first;
    }
    for (int itr = 0; itr < n; itr++) {
      std::cin >> a.at(itr).second;
    }
    long long r = 0;
    for (int itr = 0; itr + 1 < n; itr++) {
      int t1 = abs(a.at(itr).first - a.at(itr + 1).first) + abs(a.at(itr).second - a.at(itr + 1).second);
      int t2 = abs(a.at(itr).first - a.at(itr + 1).second) + abs(a.at(itr).second - a.at(itr + 1).first);
      if (t2 < t1) {
        std::swap(a.at(itr + 1).first, a.at(itr + 1).second);
      } 
      r += std::min(t1, t2);
    }
    std::cout << r << '\n';
  }
  return 0;
}