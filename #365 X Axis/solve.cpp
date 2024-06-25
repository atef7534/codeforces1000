#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <set>
#include <string>
#include <vector>

void solve();

int main(void)
{
  solve();
  return 0;
}

void solve()
{
  int tests;
  std::cin >> tests;

  for (int itr = 0; itr < tests; itr++)
  {
    std::vector<int> a(3);
    for (int itri = 0; itri < 3; itri++)
      std::cin >> a.at(itri);
    
    std::sort(a.begin(), a.end());
    std::cout << (a.back() - a.at(1)) + (a.at(1) - a.front()) << '\n';
  }

  
  return;
}