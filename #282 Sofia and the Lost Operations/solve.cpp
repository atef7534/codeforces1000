#include <iostream>
#include <vector>
#include <algorithm>
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
  int sz;
  std::cin >> sz;

  std::vector<std::pair<int, int>> a(sz);
  for (int i = 0; i < sz; i++)
    std::cin >> a[i].first;
  
  std::map<int, std::vector<int>> f1;
  std::vector<int> equals;

  for (int i = 0; i < sz; i++)
  {
    std::cin >> a[i].second;
    if (a[i].first != a[i].second)
    {
      f1[a[i].second].push_back(i);
      equals.push_back(a[i].second);
    }
  }

  int n;
  std::cin >> n;

  std::vector<int> c(n);
  std::map<int, int> f2;
  for (int i = 0; i < n; i++)
  {
    std::cin >> c[i];
    f2[c[i]]++;
  }

  bool ok = false;
  for (auto &i: a)
    ok |= (i.second == c.back());
  
  if (!ok)
    return static_cast<void> (std::cout << "NO\n");

  for (int i = int(equals.size()) - 1; i >= 0; i--)
  {
    if (f2[equals[i]] < int(f1[equals[i]].size()))
      return static_cast<void> (std::cout << "NO\n");
    f1[equals[i]].pop_back();
  }

  std::cout << "YES\n";
  return;
}
