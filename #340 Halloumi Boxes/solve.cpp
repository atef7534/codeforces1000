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

  bool sorted = true;
  std::vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    std::cin >> a.at(i);
    if (i)
      sorted &= (a.at(i - 1) <= a.at(i));
  }

  if (!sorted)
    std::cout << (!(k - 1) ? "NO\n" : "YES\n");
  else
    std::cout << "YES\n";
  return;
}
