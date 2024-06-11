#include <iostream>
#include <algorithm>
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
  long long r, b, d;
  std::cin >> r >> b >> d;

  if (d == 0 && r == b || std::min(r, b) * (d + 1) >= std::max(r, b))
    std::cout << "YES\n";
  else
    std::cout << "NO\n";
  return;
}
