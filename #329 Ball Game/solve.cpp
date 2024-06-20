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
  int t = 1;
  while (t--)
    solve();
  return 0;
}

void solve()
{
  int n;
  std::cin >> n;

  int s = 2, p = 2;
  for (int i = 0; i < n - 1; i++)
  {
    if (s > n)
      s %= n;
    std::cout << s << ' ';
    s += p++;
  }
  return;
}