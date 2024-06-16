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
  int n, x;
  std::cin >> n >> x;

  std::vector<int> a(n);
  for (int i = 0; i < n; i++)
    std::cin >> a.at(i);
  
  int mx = a.at(0);
  for (int i = 0; i < n - 1; i++)
    mx = std::max(mx, a.at(i + 1) - a.at(i));
  
  std::cout << std::max((x - a.back()) * 2, mx) << '\n';
  return;
}