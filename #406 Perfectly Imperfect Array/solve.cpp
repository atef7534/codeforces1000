#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>

int main(void)
{
  int tests;
  std::cin >> tests;

  while (tests--)
  {
    int sz;
    std::cin >> sz;

    std::vector<int> nums(sz);
    bool ok = false;
    for (int itr = 0; itr < sz; itr++)
    {
      std::cin >> nums.at(itr);
      int num = nums.at(itr);

      ok |= (std::ceil(1.0 * std::sqrt(num)) != std::sqrt(num));
    }
    std::cout << (ok ? "YES\n" : "NO\n");
  }
  return 0;
}