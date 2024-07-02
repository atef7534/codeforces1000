#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
  int tests;
  std::cin >> tests;

  while (tests--)
  {
    int sz, k;
    std::cin >> sz >> k;

    std::vector<int> nums(sz, 0);
    for (int itr = 0; itr < sz; itr++)
    {
      std::cin >> nums.at(itr);
    }

    int score = 0;
    for (int itr = 0; itr < sz; itr++)
    {
      if (itr + 1 <= k && nums.at(itr) <= k)
      {
        continue;
      }
      if (itr + 1 <= k)
      {
        score++;
      }
    }
    std::cout << score << '\n';
  }
  return 0;
}