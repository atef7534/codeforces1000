#include <iostream>

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
  int x, k, c;
  std::cin >> x >> k;

  if (x % k)
    std::cout << "1\n" << x << "\n";
  else
    std::cout << "2\n" << x - 1 << " 1\n";
  return;
}