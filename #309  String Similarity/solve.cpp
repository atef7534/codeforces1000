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

  std::string s;
  std::cin >> s;

  std::string r = "";
  int x = 0;
  for (int i = 0; i < (2 * n - 1) - (n - 1); i++)
  {
    std::string t = s.substr(i, n);
    r += t[x++];
  }
  std::cout << r << '\n';
  return;
}