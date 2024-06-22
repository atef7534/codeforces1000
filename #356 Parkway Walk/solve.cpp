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
  int tests;
  std::cin >> tests;
  while (tests--)
    solve();
  return 0;
}

void solve()
{
  int size,
      limit;
  std::cin >> size
           >> limit;
  
  int minE = 0;
  for (int itr = 0; itr < size; itr++)
  {
    int tmp;
    std::cin >> tmp;
    minE += tmp;
  }

  std::cout << std::abs(std::min(0, limit - minE)) << '\n';
  return;
}
