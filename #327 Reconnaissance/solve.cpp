#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <limits>
#include <string>
#include <cmath>
#include <set>
#include <map>


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
  int n, d;
  std::cin >> n >> d;

  long long res = 0;

  std::vector<int> a(n, 0);
  for (int i = 0; i < n; i++)
    std::cin >> a.at(i);
  
  std::sort(a.begin(), a.end());

  for (int i = 0; i < n; i++)
  {
    // binary search algorithm
    int l = i, r = n - 1;
    while (l <= r)
    {
      int mid = (l + r) / 2;
      if (a.at(mid) - a.at(i) > d)
        r = mid - 1;
      else
        l = mid + 1;
    }
    res += (r - i) * 2;
  }

  std::cout << res << '\n';
  return;
}