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
  int t = 1;
  while (t--)
    solve();
  return 0;
}

void solve()
{
  int n;
  std::cin >> n;

  std::vector<int> f(1001, 0);

  for (int i = 0; i < n; i++)
  {
    int x;
    std::cin >> x;
    int l = x - i - 1;
    while (f[l])
      l++;
    std::cout << l << '\n';
    f[l] = 1;
  }
  return;
}
