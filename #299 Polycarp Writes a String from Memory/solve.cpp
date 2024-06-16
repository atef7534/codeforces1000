#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <limits>
#include <string>

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

  std::vector<bool> a(26, 0);
  int r = 0, t = 0;
  for (int i = 0; s[i] != '\0'; i++)
  {
    if (t > 3)
    {
      r++;
      for (int j = 0; j < 26; j++)
        a[j] = false;
      a[s[i - 1] - 'a'] = true;
      t = 1;
    }
    t += (!(a[s[i] - 'a']));
    a[s[i] - 'a'] = true;
  }
  if (t > 0)
    r++;
  std::cout << r + (t > 3) << '\n';
  return;
}