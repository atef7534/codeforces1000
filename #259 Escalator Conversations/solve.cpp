#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

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
  int n, m, k, H, i, ans = 0;
  std::cin >> n >> m >> k >> H;

  std::vector<int> a(n);
  for (i = 0; i < n; i++)
  {
    std::cin >> a[i];
    int t = std::abs(a[i] - H);
    if (t % k || t / k >= m || !t)
      continue;
    ans++;
  }
  std::cout << ans << "\n";
  return;
}