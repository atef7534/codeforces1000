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
  int n, m;
  std::cin >> n >> m;

  std::map<int, bool> f;
  for (int i = 0; i < n; i++)
  {
    int x;
    std::cin >> x;
    f[x] = 1;
  }

  int ans = -1;
  for (int i = 0; i < m; i++)
  {
    int y;
    std::cin >> y;

    if (f[y])
      ans = y;
  }

  if (ans != -1)
    std::cout << "YES\n1 " << ans << '\n';
  else
    std::cout << "NO\n";
  return;
}
