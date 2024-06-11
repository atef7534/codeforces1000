#include <iostream>
#include <algorithm>

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
  int a, b;
  std::cin >> a >> b;

  std::cout << std::min({(a + b) / 4, a, b}) << "\n";
  return;
}
/*
  5 5
  std::max({
  std::min((5 / 3), (5 / 1)),
  std::min((5 / 1), (5 / 3)),
  std::min((5 + 5) / 4)
  })


*/