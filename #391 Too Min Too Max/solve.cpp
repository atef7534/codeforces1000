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
  
  /*
    -3 -1 1 2 3 3 5 10
    13 6 5 
  */
  std::cout << a.back() - a.front() + 
               abs(a.at(1) - a.back()) +
               abs(a.at(sz - 2) - a.at(1)) +
               abs(a.front() - a.at(sz - 2)) << '\n';
  return;
}