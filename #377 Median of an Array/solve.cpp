#include <algorithm>
#include <iostream>
#include <limits>
#include <vector>

void solve();
std::vector<int> getFreqs(std::string str);


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
  for (int itr = 0; itr < size; itr++)
    std::cin >> nums.at(itr);

  std::sort(nums.begin(), nums.end());
  int mid = (size - 1) / 2;
  int num = nums.at(mid);
  
  int itr;
  for (itr = mid; itr < size && nums.at(itr) == nums.at(mid); itr++);

  std::cout << itr - mid<< '\n';
  return;
}