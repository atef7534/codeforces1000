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

  std::vector<int> a(1001, 0);
  std::vector<int> b(n);
  std::vector<int> r;
  for (int i = 0; i < n; i++)
    std::cin >> b[i];

  for (int i = n - 1; i >= 0; i--)
  {
    if (a[b[i]])
      continue;
    a[b[i]] = 1;
    r.push_back(b[i]);
  }

  std::cout << r.size() << '\n';
  for (int i = int(r.size()) - 1; i >= 0; i--)
    std::cout << r[i] << ' ';
  std::cout << '\n';

  return;
}