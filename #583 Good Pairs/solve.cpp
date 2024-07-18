/*
  author: atef_ai
  created: 17 Jul 2024
  problem: Good Pairs
*/
#include <iostream>
#include <vector>
#include <algorithm>
int main(void)
{
  int tests;
  std::cin >> tests;
  while (tests--)
  {
    int n;
    std::cin >> n;
    std::vector<int> a(n, 0);
    int mn = 0, mx = 0;
    for (int itr = 0; itr < n; itr++)
    {
      std::cin >> a.at(itr);
      mx = std::max(a.at(mx), a.at(itr)) != a.at(mx) ? itr : mx;
      mn = std::min(a.at(mn), a.at(itr)) != a.at(mn) ? itr : mn;
    }
    std::cout << mn + 1 << ' ' << mx + 1 << '\n';
  }
  return 0;
}