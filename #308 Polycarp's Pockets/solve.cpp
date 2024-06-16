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
  int t = 1;
  while (t--)
    solve();
  return 0;
}

void solve()
{
  int n;
  std::cin >> n;

  std::vector<int> a(101, 0);
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    int x;
    std::cin >> x;
    ++a.at(x);
    ans = std::max(ans, a.at(x));
  }
  
  std::cout << ans << '\n';
  return;
}