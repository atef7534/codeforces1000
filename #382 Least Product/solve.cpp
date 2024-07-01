#include <algorithm>
#include <cmath>
#include <iostream>
#include <limits>
#include <map>
#include <vector>


void solve();
bool sortPair(std::pair<int, int>& a, std::pair<int, int> &b);

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

  std::vector<std::pair<int, int>> nums(size);
  int cntN = 0, zero = 0;
  for (int itr = 0; itr < size; itr++)
    std::cin >> nums.at(itr).first, 
    nums.at(itr).second = itr, 
    cntN += (nums.at(itr).first < 0),
    zero += (!nums.at(itr).first);
  
  std::sort(nums.begin(), nums.end(), sortPair);

  if (!cntN)
  {
    if (!nums.front().first)
      return void(std::cout << "0\n");
    std::cout << "1\n";
    std::cout << nums.front().second + 1 << ' ' << "0\n";
    return;
  }

  if (cntN & 1 || zero)
    return void(std::cout << "0\n");
  
  std::cout << "1\n";
  std::cout << nums.at(0).second + 1 << ' ' << "0\n"; 
  return;
}

bool sortPair(std::pair<int, int>& a, std::pair<int, int> &b)
{
  return a.first < b.first;
}