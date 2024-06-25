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
  int fNum,
      sNum;
  
  std::cin >> fNum >> sNum;

  if (!(fNum & 1) && !(sNum & 1) || (fNum & 1) && (sNum & 1))
    std::cout << "Tonya\n";
  else
    std::cout << "Burenka\n";
  return;
}