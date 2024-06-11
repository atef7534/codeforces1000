#include <iostream>
#include <algorithm>
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
  int n, i;
  std::cin >> n;

  std::vector<int> a(n), b(n);
  for (i = 0; i < n; i++)
  {
    std::cin >> a[i];
    b[i] = a[i];
  }

  std::sort(b.begin(), b.end());
  bool yes = true;
  for (i = 0; i < n; i++)
    yes &= ((b[i] & 1) == (a[i] & 1));
  
  std::cout << (yes ? "YES\n" : "NO\n");
  return;
}
