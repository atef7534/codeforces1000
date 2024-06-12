#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

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
  int k;
  std::cin >> k;
  std::cout << (k - 1) << "\n";
  return;
}
