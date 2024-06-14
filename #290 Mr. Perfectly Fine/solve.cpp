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

  int x11 , x01, x10;
  x11 = x01 = x10 = std::numeric_limits<int>::max();

  for (int i = 0; i < n; i++)
  {
    int m;
    std::string s;

    std::cin >> m >> s;
    if (!s.compare("11"))
      x11 = std::min(x11, m);
    else if (!s.compare("01"))
      x01 = std::min(x01, m);
    else if (!s.compare("10"))
      x10 = std::min(x10, m);
  }

  long long r = std::min(1LL * x11, (1LL * x01 + x10));
  if (r >= 2147483647)
    std::cout << "-1\n";
  else
    std::cout << r << "\n";
  return;
}