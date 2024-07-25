/**
 * author: atef_ai
 * created: 24 Jul
 */
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits>
int main(void)
{
  int t;
  std::cin >> t;
  while (t--) {
    int n;
    std::cin >> n;
    std::vector<long long> a(n, 0);
    for (auto &i: a) std::cin >> i;
    // solution
    int ops = std::numeric_limits<int>::max();
    for (int itr = 0; itr < n; itr++) {
      int tmp = a.at(itr), cnt = 0;
      while (!(tmp & 1)) {
        tmp >>= 1;
        cnt++;
      }
      ops = std::min(ops, cnt);
    }
    int c = std::count_if(a.begin(), a.end(), [&](int x) {
      return !(x & 1);
    });
    std::cout << ops + c - (ops != 0) << '\n';
  }
  return 0;
}