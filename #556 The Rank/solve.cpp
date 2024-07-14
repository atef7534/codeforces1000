/*
  author: atef_ai
  date: 14 Jul 2024
  problem: A. The Rank
*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
bool sortPair(std::pair<int, int> &p1, std::pair<int, int> &p2);
int main(void)
{
  int size;
  std::cin >> size;
  std::vector<std::pair<int, int>> container;
  for (int itr = 1; itr <= size; itr++)
  {
    int total = 0;
    for (int itrj = 0; itrj < 4; itrj++)
    {
      int tmp;
      std::cin >> tmp;
      total += tmp;
    }
    container.push_back(std::make_pair(itr, total));
  }
  std::sort(container.begin(), container.end(), sortPair);
  for (int itr = 0; itr < size; itr++)
  {
    if (!(container[itr].first - 1))
    {
      std::cout << itr + 1 << '\n';
      break;
    }
  }
  return 0;
}
bool sortPair(std::pair<int, int> &p1, std::pair<int, int> &p2)
{
  if (p1.second == p2.second)
  {
    return p1.first < p2.first;
  }
  return p1.second > p2.second;
}