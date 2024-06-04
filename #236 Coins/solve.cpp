#include <algorithm>
#include <iostream>
#include <vector>

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
  long long k, n;
  std::cin >> n >> k;

  if (k == 1)
  {
    std::cout << "YES\n";
    return;
  }
  if (!((n - k) & 1) || !(n & 1))
    std::cout << "YES\n";
  else
    std::cout << "NO\n";

  return;
}