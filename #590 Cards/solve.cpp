/*
  author: atef_ai
  created: 17 Jul 2024
  problem: Cards
*/
#include <algorithm>
#include <iostream>
#include <vector>
int main(void)
{
  int n;
  std::cin >> n;
  std::vector<std::pair<int, int>> a(n);
  for (int itr = 0; itr < n; itr++)
  {
    std::cin >> a.at(itr).first;
    a.at(itr).second = itr + 1;
  }
  std::sort(a.begin(), a.end());
  for (int itr = 0; itr < n / 2; itr++)
  {
    std::cout << a.at(itr).second << ' ';
    std::cout << a.at(n - itr - 1).second << '\n';
  }
  return 0;
}