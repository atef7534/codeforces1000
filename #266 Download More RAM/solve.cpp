#include <iostream>
#include <algorithm>
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
  int n, k, i;
  std::cin >> n >> k;

  std::vector<std::pair<int, int>> a(n);
  for (i = 0; i < n; i++)
    std::cin >> a[i].first;
  
  for (i = 0; i < n; i++)
    std::cin >> a[i].second;
  
  std::sort(a.begin(), a.end(), [&] (std::pair<int, int>& p1, std::pair<int, int>& p2) {
    return p1.first < p2.first;
  });

  int ans = k;
  for (i = 0; i < n; i++)
  {
    if (a[i].first <= ans)
      ans += a[i].second;
    else
      break;
  }

  std::cout << ans << "\n";
  return;
}
