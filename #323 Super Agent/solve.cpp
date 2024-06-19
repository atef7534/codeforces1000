#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <limits>
#include <string>
#include <cmath>
#include <set>


void solve();

int main(void)
{
  int t = 1;
  while (t--)
    solve();
  return 0;
}

void solve()
{
  std::string a, b, c;
  std::cin >> a >> b >> c;

  if (
      b.at(0) != b.at(2) ||
      a.at(0) != c.at(2) ||
      a.at(1) != c.at(1) ||
      a.at(2) != c.at(0)
      )
    std::cout << "NO\n";
  else
    std::cout << "YES\n";
  return;
}