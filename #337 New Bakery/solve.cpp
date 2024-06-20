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
  int n, a, b;
  std::cin >> n >> a >> b;

  if (b <= a)
    return static_cast<void> (std::cout << 1LL * n * a << '\n');

  int k = b - a;
  if (k > n)
    std::cout << 1LL * b * n - (1LL * n * (n + 1) / 2) + n << '\n';
  else
    std::cout << 1LL * (n - k) * a + (1LL * k * b) - (1LL * k * (k + 1) / 2) + k << '\n';
  return;
}
