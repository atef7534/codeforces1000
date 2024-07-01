#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
  int tests;
  std::cin >> tests;

  while (tests--)
  {
    int sz;
    std::cin >> sz;

    std::vector<int> nums(sz * 2, 0);
    for (int itr = 0; itr < sz * 2; itr++)
    {
      std::cin >> nums.at(itr);
    }
    std::sort(nums.begin(), nums.end());
    for (int itr = 0; itr < sz; itr++)
    {
      std::cout << nums.at(itr) << ' ' << nums.at(2 * sz - 1 - itr) << ' ';
    }
    std::cout << '\n';
  }
  return 0;
}