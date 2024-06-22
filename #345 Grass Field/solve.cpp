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
  int t;
  std::cin >> t;
  while (t--)
    solve();
  return 0;
}

void solve()
{
  int a, b, c, d;
  std::cin >> a >> b >> c >> d;

  std::cout << (a + b + c + d) / 2 + (a + b + c + d == 1) << '\n';
  return;
}
