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
  int t = 1;
  while (t--)
    solve();
  return 0;
}

void solve()
{
  int n, m;
  std::cin >> n >> m;

  int s = (n * (n + 1)) / 2;

  m %= s;

  int l = 0, r = n;
  while (l <= r)
  {
    int mid = (l + r) / 2;
    if ((mid * (mid + 1) / 2) > m)
      r = mid - 1;
    else
      l = mid + 1;
  }
  m -= ((r * (r + 1)) / 2);

  std::cout << m << '\n';
  return;
}
