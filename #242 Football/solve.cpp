#include <algorithm>
#include <iostream>
#include <string>
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
  std::string s;
  std::cin >> s;

  int last = 0, i;
  bool ok = 0;
  for (i = 0; i < int(s.size()); i++)
  {
    if (s[i] != s[last])
    {
      ok |= (i - last) >= 7;
      last = i;
    }
  }

  ok |= (int(s.size()) - last >= 7);
  std::cout << (ok ? "YES\n" : "NO\n");  
  return;
}