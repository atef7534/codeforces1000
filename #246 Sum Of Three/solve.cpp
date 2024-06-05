#include <algorithm>
#include <iostream>
#include <vector>
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

  if (n <= 6)
    std::cout << "NO\n";
  else
  {
    if (n % 3)
      std::cout << "YES\n1 2 " << n - 3 << "\n";
    else
    {
      if (n - 5 == 4)
        std::cout << "NO\n";
      else
        std::cout << "YES\n1 4 " << n - 5 << "\n";
    }
  }
  return;
}