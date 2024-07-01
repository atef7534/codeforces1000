#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main(void)
{
  int tests;
  std::cin >> tests;

  while (tests--)
  {
    int sz;
    std::cin >> sz;

    std::vector<int> nums(sz);
    bool minus = false;
    bool twoMinus = false;
    for (int itr = 0; itr < sz; itr++)
    {
      std::cin >> nums.at(itr);
      minus |= !(nums.at(itr) + 1);

      if (itr)
      {
        twoMinus |= !(nums.at(itr - 1) + nums.at(itr) + 2);
      }
    }

    if (twoMinus)
    {
      std::cout << accumulate(nums.begin(), nums.end(), 4) << '\n';
    }
    else if (minus)
    {
      std::cout << accumulate(nums.begin(), nums.end(), 0) << '\n';
    }
    else
    {
      std::cout << accumulate(nums.begin(), nums.end(), -4) << '\n';
    }

  }
  return 0;
}