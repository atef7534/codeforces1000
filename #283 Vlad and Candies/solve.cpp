#include <iostream>
#include <vector>
#include <algorithm>
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

  std::vector<int> a(n + 1, 0);
  for (int i = 1; i <= n; i++)
    std::cin >> a[i];
  
  std::sort(a.begin(), a.end());
  std::cout << (a.at(n) - a.at(n - 1) <= 1 ? "YES\n" : "NO\n");
  return;
}
