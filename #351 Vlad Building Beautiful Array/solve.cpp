#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <set>
#include <string>
#include <vector>


void solve();

int main(void)
{
  int tests;
  std::cin >> tests;
  while (tests--)
    solve();
  return 0;
}

void solve()
{
  int size;
  std::cin >> size;

  int mini = std::numeric_limits<int>::max();
  int miniO = std::numeric_limits<int>::max();
  int miniE = std::numeric_limits<int>::max();

  std::vector<int> nums(size, 0);
  for (int itr = 0; itr < size; itr++)
  {
    std::cin >> nums.at(itr);
    mini = std::min(mini, nums.at(itr));

    if (nums.at(itr) & 1)
      miniO = std::min(miniO, nums.at(itr));
    else
      miniE = std::min(miniE, nums.at(itr));
  }

  for (int itr = 0; itr < size; itr++)
  {
    if (mini & 1)
    {
      if (nums.at(itr) & 1)
        continue;
      if (miniO > nums.at(itr))
        return static_cast<void> (std::cout << "NO\n");
    }
    else
    {
      if (!(nums.at(itr) & 1))
        continue;
      if (miniO >= nums.at(itr))
        return static_cast<void> (std::cout << "NO\n");
    }
  }

  std::cout << "YES\n";
  return;
}
