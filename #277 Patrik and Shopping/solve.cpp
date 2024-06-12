#include <iostream>
#include <algorithm>

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
  int d1, d2, d3;
  std::cin >> d1 >> d2 >> d3;
  std::cout << std::min({2 * (d2 + d3), d1 + d2 + d3, 2 * (d1 + d3), 2 * (d1 + d2)}) << "\n";
  return;
}
