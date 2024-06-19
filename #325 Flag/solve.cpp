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

  std::string res = "YES\n";
  for (int i = 0; i < n; i++)
  {
    std::set<char> st;
    for (int j = 0; j < m; j++)
    {
      std::cin >> a.at(i).at(j);
      st.insert(a.at(i).at(j));
    }
    if (int(st.size()) != 1)
      res = "NO\n";
    if (!i)
      continue;
    if (a.at(i).at(0) == a.at(i - 1).at(0))
      res = "NO\n";
  }
  std::cout << res;
  return;
}