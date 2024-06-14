#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

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

  std::vector<int> a(n);
  std::map<int, int> f;
  for (int i = 0; i < n; i++)
  {
    std::cin >> a[i];
    f[a[i]]++;
  }

  int mx = INT_MAX;
  for (int i = 0; i < n; i++)
  {
    if (f[a[i]] == 1)
    {
      if (mx == INT_MAX)
        mx = i;
      else
        if (a[mx] > a[i])
          mx = i;
    }
  }
  std::cout << (mx == INT_MAX ? -1 : mx + 1);
  std::cout << "\n";
  return;
}
