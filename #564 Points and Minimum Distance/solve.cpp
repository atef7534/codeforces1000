/*
  author: atef_ai
  date: 14 Jul 2024
  problem: Points and Minimum Distance
*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <limits>
int main(void)
{
  int tests;
  std::cin >> tests;
  while (tests--)
  {
    int size;
    std::cin >> size;
    std::vector<int> arr(size * 2, 0);
    for (int itr = 0; itr < size * 2; itr++)
    {
      std::cin >> arr.at(itr);
    }
    std::sort(arr.begin(), arr.end());
    std::vector<std::pair<int, int>> arrPairs(size);
    for (int itr = 0; itr < size; itr++)
    {
      arrPairs.at(itr) = std::make_pair(arr.at(itr), arr.at(size * 2 - itr - 1));
    }
    
    int minDistance = abs(arrPairs.at(0).first - arrPairs.at(size - 1).first) + abs(arrPairs.at(0).second - arrPairs.at(size - 1).second);
    std::cout << minDistance << '\n';
    for (int itr = 0; itr < size; itr++)
    {
      std::cout << arrPairs.at(itr).first << ' ' << arrPairs.at(itr).second << '\n';
    }
  }
  return 0;
}
