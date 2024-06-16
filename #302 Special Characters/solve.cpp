#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <limits>
#include <string>
#include <cmath>

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

  if (n & 1)
    return static_cast<void> (std::cout << "NO\n");
  
  std::cout << "YES\n";
  std::vector<std::string> a{"AA", "BB"};

  for (int i = 0; i < n / 2; i++)
    std::cout << a.at(i & 1);
  std::cout << "\n";
  
  return;
}