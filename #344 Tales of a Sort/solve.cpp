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
  int n;
  std::cin >> n;

  std::vector<int> a(n);
  /*
    2 1 2 1 2
    1 0 1 0 1
    0 0 0 0 0
  */
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    std::cin >> a.at(i);

    if (i)
    {
      if (a.at(i - 1) > a.at(i))
        ans = std::max(ans, a.at(i - 1));
    }
  }
  std::cout << ans << '\n';
  return;
}
