#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

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
  int i, n, w = 0;
  std::string s;
  std::cin >> s;

  n = int(s.size());
  std::vector<int> r(26, 0), g(26, 0);
  for (i = 0; i < n; i++)
  {
    int x = int(s[i] - 'a');
    if (!r[x])
      r[x] = 1;
    else
      g[x] = 1;
  }

  int cnt1 = std::count(r.begin(), r.end(), 1);
  int cnt2 = std::count(g.begin(), g.end(), 1);

  if (cnt1 == cnt2)
    std::cout << cnt1 << "\n";
  else
    std::cout << std::min(cnt1, cnt2) + std::abs(cnt1 - cnt2) / 2 << "\n";
  return;
}