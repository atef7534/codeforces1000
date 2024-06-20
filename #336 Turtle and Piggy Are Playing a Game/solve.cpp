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
  int left, right, ans = 0;
  std::cin >> left >> right;

  while (right != 1)
  {
    right /= 2;
    ++ans;
  }
  std::cout << ans << '\n';
  return;
}
