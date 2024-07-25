/*
 * author: atef_ai
 * created: Jul 23
*/
#include <iostream>
#include <vector>
#include <algorithm>
int main(void) {
  int t;
  std::cin >> t;
  while (t--) {
    int n, m;
    std::cin >> n >> m;
    std::vector<std::vector<char>> a(n, std::vector<char>(m, '\0'));
    for (int itr = 0; itr < n; itr++) {
      for (int itrj = 0; itrj < m; itrj++) {
        std::cin >> a.at(itr).at(itrj);
      }
    }
    // solution
    std::pair<int, int> left(n, m), top(n, m);
    for (int itr = 0; itr < n; itr++) {
      for (int itrj = 0; itrj < m; itrj++) {
        if (a.at(itr).at(itrj) != 'E') {
          if (itrj < left.second) {
            left = std::make_pair(itr, itrj);
          }
          if (itr < top.first) {
            top = std::make_pair(itr, itrj);
          }
        }
      }
    }
    if (left.first < top.first && left.second <= top.second || left == top) std::cout << "YES\n";
    else std::cout << "NO\n";
  }
  return 0;
}