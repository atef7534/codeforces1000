#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <limits>
#include <string>
#include <cmath>
#include <set>


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

  std::string a, b, c;
  std::cin >> a >> b >> c;

  for (int i = 0; i < n; i++)
  {
    if (a.at(i) != b.at(i) && a.at(i) != c.at(i) && b.at(i) != c.at(i))
      return static_cast<void> (std::cout << "YES\n");
    
    if (a.at(i) == b.at(i) && a.at(i) != c.at(i))
      return static_cast<void> (std::cout << "YES\n");
  }
  std::cout << "NO\n";
  return;
}
