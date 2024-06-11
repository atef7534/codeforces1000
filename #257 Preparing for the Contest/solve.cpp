#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

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
  int n, k, i;
  std::cin >> n >> k;
  for (i = n - k; i > 0; i--)
    std::cout << i << " ";
  for (i = n - k + 1; i <= n; i++)
    std::cout << i << " ";
  std::cout << "\n";
  return;
}