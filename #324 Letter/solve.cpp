#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <limits>
#include <string>
#include <cmath>
#include <set>
#include <map>


void solve();

int main(void)
{
  int t = 1;
  while (t--)
    solve();
  return 0;
}

void solve()
{
  int n, m;
  std::cin >> n >> m;

  std::vector<std::vector<char>> a(n, std::vector<char>(m, '\0'));
  int l, r;
  l = std::numeric_limits<int>::max();
  r = std::numeric_limits<int>::min();

  
  for (int i = 0; i < n; i++)
  {
    int t = std::numeric_limits<int>::max(), x = std::numeric_limits<int>::min();
    for (int j = 0; j < m; j++)
    {
      std::cin >> a.at(i).at(j);
      if (a.at(i).at(j) == '*')
      {
        t = std::min(t, j);
        x = std::max(x, j);
      }
    }
    l = std::min(l, t);
    r = std::max(r, x);
  }

  for (int i = n - 1; i >= 0; i--)
  {
    bool yes = false;
    for (int j = 0; j < m; j++)
      yes |= (a.at(i).at(j) == '*');
    if (yes)
      break;
    a.pop_back();
  }

  std::reverse(a.begin(), a.end());

  for (int i = int(a.size()) - 1; i >= 0; i--)
  {
    bool yes = false;
    for (int j = 0; j < m; j++)
      yes |= (a.at(i).at(j) == '*');
    if (yes)
      break;
    a.pop_back();
  }

  for (int i = int(a.size()) - 1; i >= 0; i--)
  {
    for (int j = l; j <= r; j++)
      std::cout << a.at(i).at(j);
    std::cout << '\n';
  }
  return;
}