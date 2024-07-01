#include <algorithm>
#include <cmath>
#include <iostream>
#include <limits>
#include <map>
#include <vector>


void solve();

int main()
{
    int tests = 1;
    while (tests--)
      solve();
    return 0;
}


void solve()
{
  int size;
  std::cin >> size;

  std::vector<int> nums(size + 1, 0);
  bool ok = false;
  for (int itr = 1; itr <= size; itr++)
    std::cin >> nums.at(itr), ok |= (nums.at(nums.at(nums.at(itr))) == itr);

  std::cout << (ok ? "YES\n" : "NO\n");
  return;
}