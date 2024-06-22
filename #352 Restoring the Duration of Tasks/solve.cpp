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

  std::vector<std::pair<int, int>> nums(size);
  for (int itr = 0; itr < size; itr++)
    std::cin >> nums.at(itr).first;
  
  for (int itr = 0; itr < size; itr++)
    std::cin >> nums.at(itr).second;
  
  int lastDuration = nums.at(0).first;
  for (int itr = 0; itr < size; itr++)
  {
    lastDuration = std::max(lastDuration, nums.at(itr).first);
    std::cout << nums.at(itr).second - lastDuration << ' ';
    lastDuration = std::max(lastDuration, nums.at(itr).second);
  }

  std::cout << '\n';
  return;
}
