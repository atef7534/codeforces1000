#include <iostream>
#include <vector>
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
  int s;
  std::cin >> s;

  /*
    8
    1 1 1 1 1 1 1 1 solution1
    1 1 3 3 solution2
    1 3 4 solution3
  */
  int t = s, i = 0;
  for (i; t - (2 * i + 1) >= 0; i++)
    t -= (2 * i + 1);
  if (t)
    ++i;

  std::cout << std::min({s, i}) << "\n";
  return;
}
