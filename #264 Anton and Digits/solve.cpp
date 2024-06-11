#include <iostream>
#include <algorithm>

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
  int k2, k3, k5, k6;
  std::cin >> k2 >> k3 >> k5 >> k6;

  int t = std::min({k2, k5, k6});
  int ans = t * 256;
  k2 -= t;
  k5 -= t;
  k6 -= t;

  ans += (std::min(k2, k3) * 32);
  std::cout << ans << "\n";
  return;
}