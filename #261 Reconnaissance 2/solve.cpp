#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <limits>

void solve();
int main(void)
{
  int t = 1;
  while (t--)
    solve();
  return 0;
}

void solve()
{
  int n, i, mx = std::numeric_limits<int>::max();
  std::cin >> n;

  std::vector<int> a(n);
  for (i = 0; i < n; i++)
    std::cin >> a[i];
    
  if (a.front() == a.back())
    return static_cast<void> (std::cout << "1 " << n << "\n");
  
  std::vector<int> ans(2);
  for (i = 1; i < n; i++)
  {
    int d = abs(a[i] - a[i - 1]);
    if (d < mx)
    {
      ans[0] = i;
      ans[1] = i + 1;
      mx = d;
    }
  }
  if (std::abs(a.front() - a.back()) < mx)
    return static_cast<void> (std::cout << "1 " << n << "\n");
  
  std::cout << ans[0] << " " << ans[1] << "\n";
  return;
}