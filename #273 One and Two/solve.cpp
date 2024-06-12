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
  int n, s = 0, i;
  std::cin >> n;

  std::vector<int> a(n);
  for (i = 0; i < n; i++)
  {
    std::cin >> a[i];
    s += (a[i] == 2);
  }

  if (s & 1)
    return static_cast<void> (std::cout << "-1\n");
  
  if (!s)
    return static_cast<void> (std::cout << "1\n");
  int md = s / 2;
  for (i = 0; i < n - 1 && md; i++)
    md -= (a[i] == 2);
  
  std::cout << i << "\n";
  return;
}
