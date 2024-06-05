#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>

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
  int n, i, l = 0;
  std::cin >> n;

  std::vector<int> f(n + 1, 0);
  
  for (i = 0; i < n; i++)
  {
    int x;
    std::cin >> x;
    l = std::max(l, f[x]);
    f[x] = i + 1;
  }
  std::cout << l << "\n";
  return;
}