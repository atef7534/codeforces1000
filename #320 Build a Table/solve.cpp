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

  std::vector<int> a(n * 2);
  for (int i = 0; i < n * 2; i++)
    std::cin >> a.at(i);
  
  std::sort(a.begin(), a.end());
  
  for (int i = 0; i < n; i++)
    std::cout << a.at(i) << ' ' << a.at(2 * n - i - 1) << '\n';
  return;
}
