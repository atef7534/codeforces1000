#include <algorithm>
#include <iostream>
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
  int size, limit;
  std::cin >> size >> limit;

  std::vector<int> nums(size * 2, 0);
  for (int itr = 0; itr < (size << 1); itr++)
    std::cin >> nums.at(itr);
  
  std::sort(nums.begin(), nums.end());
  for (int itr = 0; itr < size; itr++)
  {
    int miniD = nums.at(size + itr) - nums.at(itr);
    if (miniD < limit)
      return void(std::cout << "NO\n");
  }
  std::cout << "YES\n";
  return;
}