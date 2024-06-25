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
  
  int start = 1;
  for (int itr = 0; itr < size; itr++)
  {
    int tmp = nums.at(itr);
    if (tmp == start)
      start++;
    start++;
  }
  std::cout << start - 1 << '\n';
  return;
}
