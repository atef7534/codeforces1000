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
  int t;
  std::cin >> t;
  while (t--)
    solve();
  return 0;
}

void solve()
{
  int n;
  std::cin >> n;

  int l = 0, r = 1e9;
  long long m;
  while (l <= r)
  {
    m = (r + l) / 2;
    if (m * m >= n)
      r = m - 1;
    else
      l = m + 1;
  }

  int start = (r * r) + 1;
  int x = n - start + 1;
  int mid = start + r;

  if (x > r)
    std::cout << r + 1 << ' ' << r - (n - mid) + 1 << '\n';
  else
    std::cout << n % start + 1 << ' ' << r + 1 << '\n';
  return;
}
