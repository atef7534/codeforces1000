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
  int a, b;
  std::cin >> a >> b;

  std::cout << (a ^ b) << "\n";
  return;
}
