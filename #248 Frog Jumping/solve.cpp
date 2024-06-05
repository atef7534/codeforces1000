#include <iostream>
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
  long long a, b, k;
  std::cin >> a >> b >> k;

  std::cout << ((k + 1) / 2) * a - (k / 2) * b << "\n";
  return;
}