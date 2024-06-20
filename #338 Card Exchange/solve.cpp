#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <set>
#include <string>
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
  int n, k;
  std::cin >> n >> k;

  std::vector<int> a(101, 0);
  bool ok = false;
  for (int i = 0; i < n; i++)
  {
    int x;
    std::cin >> x;
    ++a[x];
    ok |= (a[x] == k);
  }

  std::cout << (ok ? k - 1 : n);
  std::cout << '\n';
  return;
}
