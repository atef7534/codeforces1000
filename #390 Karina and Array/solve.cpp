#include <algorithm>
#include <cmath>
#include <iostream>
#include <limits>
#include <map>
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
  int sz;
  std::cin >> sz;

  std::vector<int> a(sz, 0);
  for (int itr = 0; itr < sz; itr++)
    std::cin >> a.at(itr);
  
  std::sort(a.begin(), a.end());
  std::cout << std::max(1LL * a.at(0) * a.at(1), 1LL * a.at(sz - 1) * a.at(sz - 2)) << '\n';
  return;
}