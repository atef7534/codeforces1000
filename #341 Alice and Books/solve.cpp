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
  int mx = 0;
  for (int i = 0; i < n - 1; i++)
  {
    std::cin >> a.at(i);
    mx = std::max(mx, a.at(i));
  }
  int x;
  std::cin >> x;

  std::cout << x + mx << '\n';
  return;
}
