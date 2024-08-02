/**
 * author: atef_ai
 * created: 28 Jul 18:04
**/
#include <algorithm>
#include <iostream>
#include <vector>
std::ostream& operator<<(std::ostream& os, const std::vector<int>& v) {
  for (size_t itr = 1; itr < v.size(); ++itr) {
    os << v.at(itr) << ' ';
  }
  return os;
}
int main(void) {
  int t;
  std::cin >> t;
  while (t--) {
    int n, m;
    std::cin >> n >> m;
    std::vector<std::vector<int>> a(n, std::vector<int>(m, 0));
    for (int itr = 0; itr < n; itr++) {
      for (int itrj = 0; itrj < m; itrj++) {
        std::cin >> a.at(itr).at(itrj);
      }
    }
    /* solution */
    if (!(n - 1) && !(m - 1)) {
      std::cout << "-1\n"; // failed state
      continue;
    }
    /* success */
    if (m != 1) {
      for (int itr = 0; itr < n; itr++) {
        std::cout << a.at(itr);
        std::cout << a.at(itr).front() << '\n';
      }
    } else {
      for (int itr = 0; itr < m; itr++) {
        int tmp = a.at(0).at(itr);
        for (int itrj = 0; itrj + 1 < n; itrj++) {
          a.at(itrj).at(itr) = a.at(itrj + 1).at(itr);
        }
        a.at(n - 1).at(itr) = tmp;
      }
      for (int itr = 0; itr < n; itr++) {
        std::cout << a.at(itr).front() << ' ';
        std::cout << a.at(itr);
        std::cout << '\n';
      }
    }
  }
  return 0;
}