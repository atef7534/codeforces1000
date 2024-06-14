#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
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
  int n;
  std::cin >> n;

  std::vector<int> a(n);
  int x = 0;
  for (int i = 0; i < n; i++)
  {
    std::cin >> a[i];
    if (a[i] == i + 1)
      ++x;
  }
  std::cout << (x + 1) / 2 << "\n";
  return;
}