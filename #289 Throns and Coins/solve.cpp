#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <limits>

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

  std::string a;
  std::cin >> a;

  int i, coins = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[i] == '@')
      ++coins;
    else if (a[i] == '.')
      continue;
    else
      if (i + 1 < n)
        if (a[i + 1] == '*')
          break;
  }
  
  std::cout << coins << "\n";
  return;
}