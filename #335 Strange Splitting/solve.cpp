#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <set>
#include <string>
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
  int n;
  std::cin >> n;

  std::vector<int> a(n);
  for (int i = 0; i < n; i++)
    std::cin >> a.at(i);
  
  if (a.at(0) == a.at(n - 1))
    return static_cast<void> (std::cout << "NO\n");
  
  std::cout << "YES\n";
  bool b = true;
  for (int i = 0; i + 1 < n; i++)
  {
    if (b && a.at(i) == a.at(i + 1))
    {
      b = false;
      std::cout << "B";
    }
    else
      std::cout << "R";
  }
  std::cout << (b ? "B\n" : "R\n");
  return;
}
