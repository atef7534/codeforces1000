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
  std::string s;
  std::cin >> s;

  int o = std::count(s.begin(), s.end(), '1');
  int n = s.size();

  if (o == n || (2 * o == n && n == 2))
    std::cout << "0\n";
  else if (o * 2 == n)
    std::cout << (o - 1) << "\n";
  else
    std::cout << std::min(n - o, o) << "\n";
  return;
}