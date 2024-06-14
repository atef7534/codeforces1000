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
  int a, b, c;
  std::cin >> a >> b >> c;

  /*
    2 1 1
    
  */
  std::cout << std::min(2 * a - 1, 2 * (b + c) + 1) << "\n";
  return;
}