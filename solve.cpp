#include <algorithm>
#include <iostream>
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
  int i, s;
  std::vector<int> a(3);
  for (i = 0; i < 3; i++)
    std::cin >> a[i];
  
  std::sort(a.begin(), a.end());

  if (a[1] == a[2] && !(a[0] & 1) || a[0] == a[1] && !(a[2] & 1))
  {
    std::cout << "YES\n";
    return;  
  }

  if (a[0] + a[1] == a[2] && a[0] != a[1])
  {
    std::cout << "YES\n";
    return;
  }

  std::cout << "NO\n";
  return;
}