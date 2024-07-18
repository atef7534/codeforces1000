/*
  author: atef_ai
  created: 17 Jul 2024
  problem: Game
*/
#include <iostream>
#include <vector>
#include <algorithm>
int main(void)
{
  int tests = 1;
  while (tests--)
  {
    int n;
    std::cin >> n;
    std::vector<int> a(n, 0);
    int mn = 0, mx = 0;
    for (int itr = 0; itr < n; itr++)
    {
      std::cin >> a.at(itr);
    }
    std::sort(a.begin(), a.end());
    std::cout << a.at((n - 1) / 2) << '\n';
  }
  return 0;
}