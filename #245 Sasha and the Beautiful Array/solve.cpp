#include <algorithm>
#include <iostream>
#include <vector>
#include <limits>

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
  int n, i, mn = std::numeric_limits<int>::max(), mx = std::numeric_limits<int>::min();
  std::cin >> n;

  std::vector<int> a(n);
  for (i = 0; i < n; i++)
  {
    std::cin >> a[i];
    mn = std::min(mn, a[i]);
    mx = std::max(mx, a[i]);
  }

  std::cout << mx - mn << "\n";
  return;
}