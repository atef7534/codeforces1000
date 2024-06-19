#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <limits>
#include <string>
#include <cmath>
#include <set>

int n, m;
std::vector<std::vector<char>> a(101, std::vector<char>(101, '\0'));

void solve();
int brute(int i, int j);

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
  std::cin >> n >> m;

  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      std::cin >> a.at(i).at(j);
  
  int res = brute(0, 0);
  std::cout << res << '\n';
  return;
}

int brute(int i, int j)
{
  int r = 0;
  for (int i = 0; i < n; i++)
    r += (a[i][m - 1] == 'R');
  
  int d = 0;
  for (int j = 0; j < m; j++)
    d += (a[n - 1][j] == 'D');
  
  return r + d;
}