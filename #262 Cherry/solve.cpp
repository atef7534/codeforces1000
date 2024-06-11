#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
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
  long long n, i, mx = std::numeric_limits<int>::min();
  std::cin >> n;

  std::vector<long long> a(n);
  for (i = 0; i < n; i++)
  {
    std::cin >> a[i];
    if (i) 
    {
      mx = std::max(mx, a[i] * a[i - 1]);
    }
  }

  std::cout << mx << "\n";
  return;
}