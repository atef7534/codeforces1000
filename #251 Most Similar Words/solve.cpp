#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <algorithm>


void solve();
int get(std::string r, std::string x, int m);

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
  int n, m, i, j, ans = std::numeric_limits<int>::max();
  std::cin >> n >> m;

  std::vector<std::string> a;
  for (i = 0; i < n; i++)
  {
    std::string t;
    std::cin >> t;
    a.push_back(t);
  }

  for (i = 0; i < n; i++)
  {
    int t = std::numeric_limits<int>::max();
    std::string r = a[i];
    for (j = i + 1; j < n; j++)
    {
      std::string x = a[j];
      t = std::min(t, get(r, x, m));
    }
    ans = std::min(ans, t);
  }

  std::cout << ans << "\n";
  return;
}

int get(std::string r, std::string x, int m)
{
  int moves = 0;
  for (int i = 0; i < m; i++)
    moves += abs(r[i] - x[i]);
  return moves;
}