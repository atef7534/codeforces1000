#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <limits>
#include <string>
#include <cmath>

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
  int n, s, r;
  std::cin >> n >> s >> r;

  std::cout << s - r << " ";
  int x = (r % (n - 1));

  for (int i = 0; i < n - 1; i++)
  {
    int t = (x > 0) ? 1 : 0;
    t += (r / (n - 1));
    std::cout << t << " ";
    x--;
  }
  std::cout << '\n';

  return;
}