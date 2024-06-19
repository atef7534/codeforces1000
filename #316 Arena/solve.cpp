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
    std::cin >> a.at(i);
  
  std::sort(a.begin(), a.end());

  int i;
  for (i = 0; i < n && a.at(i) == a.at(0); i++);

  std::cout << n - i << '\n';
  return;
}
