/**
 * author: atef_ai
 * created: 28 Jul 17:45
**/
#include <algorithm>
#include <iostream>
#include <vector>
int main(void) {
  int n, k;
  std::cin >> n >> k;
  /* solution */
  std::vector<std::pair<int, int>> a(10);
  std::vector<int> f(10, 0);
  for (int itr = 0; itr < n; itr++) {
    int t; std::cin >> t;
    a.at(t) = std::make_pair(itr, t);
    f.at(t) = 1;
  }
  std::vector<std::pair<int, int>> res;
  for (int itr = 0; itr < k; itr++) {
    int x; std::cin >> x;
    if (!f.at(x)) continue;
    res.push_back(a.at(x));
  }
  std::sort(res.begin(), res.end());
  for (int itr = 0, n = (int)res.size(); itr < n; itr++) {
    std::cout << res.at(itr).second << ' ';
  }
  std::cout << '\n';
  return 0;
}