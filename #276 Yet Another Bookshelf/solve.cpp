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

  std::vector<int> a(n);
  for (int i = 0; i < n; i++)
    std::cin >> a[i];

  int left = -1;
  for (int i = 0; i < n; i++)
  {
    if (a[i])
    {
      left = i;
      while (a[i++])
        left = i;
      break;
    }
  }

  int right = -1;
  for (int i = n - 1; i >= 0; i--)
  {
    if (a[i] == 1)
    {
      right = i;
      while (a[i--])
        right = i;
      break;
    }
  }
  
  int ans = 0;
  for (int i = left; i <= right; i++)
    ans += !(a[i]);
  
  std::cout << ans << "\n";
  return;
}
