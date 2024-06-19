#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <limits>
#include <string>
#include <cmath>
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

  std::vector<int> a(n);
  for (int i = 0; i < n; i++)
    std::cin >> a.at(i);
  
  std::string s;
  std::cin >> s;

  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
      if (a[i] == a[j])
        if (s[j] != s[i])
          return static_cast<void> (std::cout << "NO\n");
  }

  std::cout << "YES\n";
  return;
}