#include <iostream>
#include <algorithm>
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
  int n;
  std::cin >> n;

  std::vector<int> f(26, 0);
  for (int i = 0; i < n; i++)
  {
    std::string t;
    std::cin >> t;

    for (int j = 0; t[j] != '\0'; j++)
      f[t[j] - 'a']++;
  }

  bool ok = true;
  for (int i = 0; i < 26; i++)
  {
    int x = f[i];
    ok &= (!(x % n));
  }

  std::cout << (ok ? "YES\n" : "NO\n");
  return;
}
