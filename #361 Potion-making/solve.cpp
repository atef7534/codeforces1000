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
  int percent;
  std::cin >> percent;

  int gcd = std::__gcd(percent, 100);
  if (gcd == 1)
    std::cout << "100\n";
  else
    std::cout << 100 / gcd << '\n';
  return;
}