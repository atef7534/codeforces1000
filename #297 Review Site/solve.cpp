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

  int r = 0;
  for (int i = 0; i < n; i++)
  {
    int x;
    std::cin >> x;
    r += (x != 2);
  }
  std::cout << r << "\n";
  return;
}