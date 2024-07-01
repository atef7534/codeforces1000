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
  int n, k;
  std::cin >> n >> k;

  int allDia = (4 * n - 2);

  if (k == allDia) 
    std::cout << k / 2 + 1 << '\n';
  else
    std::cout << (k + 1) / 2 << '\n';
  return;
}