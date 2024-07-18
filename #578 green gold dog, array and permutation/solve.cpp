/*
  author: atef_ai
  created: 16 Jul 2024
  problem: green_gold_dog, array and permutation
*/
#include <iostream>
#include <vector>
#include <algorithm>
bool sortPair(std::pair<int, int>& p1, std::pair<int, int>& p2);
int main(void)
{
  int t;
  std::cin >> t;
  while (t--)
  {
    int n;
    std::cin >> n;
    std::vector<std::pair<int, int>> a(n + 1);
    for (int itr = 1; itr <= n; itr++)
    {
      std::cin >> a.at(itr).second;
      a.at(itr).first = itr;
    }
    std::sort(a.begin(), a.end(), sortPair);
    std::vector<int> res(n + 1, 0);
    for (int itr = 0; itr < n; itr++)
    {
      res.at(a.at(itr).first) = itr + 1;
    }
    for (int itr = 1; itr <= n; itr++)
    {
      std::cout << res.at(itr) << ' ';
    }
    std::cout << '\n';
  }
  return 0;
}
bool sortPair(std::pair<int, int>& p1, std::pair<int, int>& p2)
{
  return p1.second > p2.second;
}