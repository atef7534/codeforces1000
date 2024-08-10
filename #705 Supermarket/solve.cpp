/**
 * author: atef_ai
 * created: 2 Aug 19:11
**/
#include <iostream>
#include <iomanip>
#include <vector>
#include <limits>
int main(void) {
  int n, m;
  std::cin >> n >> m;
  std::vector<int> a(101, 0);
  for (int itr = 0; itr < n; itr++) {
    int ai, bi;
    std::cin >> ai >> bi;
    a.at(ai) = std::max(a.at(ai), bi);
  }
  double ans = std::numeric_limits<int>::max();
  for (int itr = 0; itr < 101; itr++) {
    if (!a.at(itr)) continue;
    ans = std::min(ans, (1.0 * m / a.at(itr)) * itr);
  }
  std::cout << std::fixed;
  std::cout << std::setprecision(8);
  std::cout << ans << '\n';
  return 0;
}