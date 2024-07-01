#include <algorithm>
#include <cmath>
#include <iostream>
#include <limits>
#include <map>
#include <vector>


void solve();

int main()
{
  int tests;
  std::cin >> tests;
  while (tests--)
    solve();
  return 0;
}


void solve()
{
  int sz;
  std::cin >> sz;

  std::vector<std::pair<int, int>> nums(sz);
  for (int itr = 0; itr < sz; itr++)
  {
    int tmp;
    std::cin >> tmp;

    nums.at(itr).first = tmp;
    nums.at(itr).second = itr + 1;
  }

  std::sort(nums.begin(), nums.end(), [&](std::pair<int, int>& p1, std::pair<int, int>& p2) {
    return p1.first < p2.first;
  });

  std::cout << nums.at(sz - 1).second << '\n';
  return;
}
