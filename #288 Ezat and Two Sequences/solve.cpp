#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <limits>

void solve();
int main(void)
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  std::cout << std::fixed << std::setprecision(10);
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

  long long s = 0;
  for (int i = 0; i < n; i++)
  {
    std::cin >> a[i];
    s += a[i];
  }
  
  int mx = a[0];
  for (int i = 0; i < n; i++)
  {
    if (a[i] > mx)
      mx = a[i];
  }

  std::cout << mx + (1.0 * (s - mx) / (n - 1)) << "\n";
  return;
}