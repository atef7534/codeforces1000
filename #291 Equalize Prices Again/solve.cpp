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
  int n, s = 0;
  std::cin >> n;

  for (int i = 0; i < n; i++)
  {
    int x;
    std::cin >> x;
    s += x;
  }

  std::cout << (s / n) + (s % n != 0) << "\n";
  return;
}