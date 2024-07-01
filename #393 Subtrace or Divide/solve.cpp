#include <algorithm>
#include <cmath>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <set> 
#include <string>
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
  int num;
  std::cin >> num;

  if (!(num & 1) && num > 2 || !(abs(num - 3)))
    std::cout << "2\n";
  else
  {
    if (num == 1)
      std::cout << "0\n";
    else
      std::cout << "3\n";
  }
  return;
}