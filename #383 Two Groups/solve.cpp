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
  int size;
  std::cin >> size;

  std::vector<int> nums(size, 0);
  long long sum = 0;
  for (int itr = 0; itr < size; itr++)
    std::cin >> nums.at(itr), sum += nums.at(itr);
  
  std::cout << std::abs(sum) << '\n';
  return;
}