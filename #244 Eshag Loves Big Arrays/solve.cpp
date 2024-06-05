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
  int n, i, mn = std::numeric_limits<int>::max(), c = 0;
  std::cin >> n;

  std::vector<int> a(n);
  for (i = 0; i < n; i++)
  {
    std::cin >> a[i];
    mn = std::min(mn, a[i]);
  }
  
  c = std::count_if(a.begin(), a.end(), [&] (int x) {
    return x != mn;
  });

  std::cout << c << "\n";
  return;
}