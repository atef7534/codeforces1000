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
    std::vector<int> a(101, 0);
    // solution
    int found = 0, nums = 0;
    for (int itr = 0; itr < n; itr++) {
      int tmp;
      std::cin >> tmp;
      found |= (!tmp || a.at(tmp));
      a.at(tmp) = 1;
      nums += (tmp > 0);
    }
    std::cout << (found ? nums : n + 1) << '\n';
  }
  return 0;
}