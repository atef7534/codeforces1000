#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <limits>
#include <string>
#include <cmath>

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

  std::vector<int> a(26, 0);
  for (int i = 0; i < 6; i++)
  {
    if (isupper(s[i]) && !a[s[i] - 'A'])
      return static_cast<void> (std::cout << "NO\n");
    if (islower(s[i]))
      a[s[i] - 'a']++;
  }
  std::cout << "YES\n";
  return;
}