#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <limits>

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
  long long a, b, c;
  std::cin >> a >> b >> c;

  long long r = a + b + c;
  std::cout << (r / 2)  << "\n";
  return;
}