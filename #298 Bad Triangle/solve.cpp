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

  std::vector<int> a(n);
  for (int i = 0; i < n; i++)
    std::cin >> a[i];
  
  if (a[0] + a[1] <= a[n - 1])
    std::cout << "1 2 " << n << "\n";
  else
    std::cout << "-1\n";
  return;
}