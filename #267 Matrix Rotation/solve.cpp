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
  int a, b, c, d;
  std::cin >> a >> b >> c >> d;

  if (a < std::min(b, c) && d > std::max(b, c))
    return static_cast<void> (std::cout << "YES\n");
  
  if (b > std::max(a, d) && c < std::min(a, d))
    return static_cast<void> (std::cout << "YES\n");
  
  if (b < std::min(a, d) && c > std::max(a, d))
    return static_cast<void> (std::cout << "YES\n");

  if (a > std::max(b, c) && d < std::min(b, c))
    return static_cast<void> (std::cout << "YES\n");
  
  std::cout << "NO\n";
  return;
}
