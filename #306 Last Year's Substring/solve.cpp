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

  bool ok = 0;
  for (int i = 0; i <= 4 && !ok; i++)
  {
    std::string t = s.substr(0, 4 - i) + s.substr(n - i);
    ok |= (!t.compare("2020"));
  }

  std::cout << (ok ? "YES\n" : "NO\n");
  return;
}