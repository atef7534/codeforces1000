/**
 * author: atef_ai
 * created: 2 Aug 20:55
**/
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
int main(void) {
  int n;
  std::cin >> n;
  while (n--) {
    std::vector<std::pair<int, int>> xy;
    int x, y; std::cin >> x >> y;
    xy.push_back(std::make_pair(x, y));
    std::cin >> x >> y;
    xy.push_back(std::make_pair(x, y));
    std::cin >> x >> y;
    xy.push_back(std::make_pair(x, y));
    std::sort(xy.begin(), xy.end(), [&](std::pair<int, int>& p1, std::pair<int, int>& p2) {
      return p1.second < p2.second;
    });
    std::cout << std::fixed;
    std::cout << std::setprecision(7);
    if (xy.at(1).second == xy.at(2).second) {
      std::cout << 1.0 * std::abs(xy.at(1).first - xy.at(2).first) << '\n';
      continue;
    }
    std::cout << 1.0 * 0 << '\n';
  }
  return 0;
}