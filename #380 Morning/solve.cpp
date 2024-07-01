#include <algorithm>
#include <iostream>
#include <limits>
#include <map>
#include <vector>

void solve();

int main()
{
    int tests;
    std::cin >> tests;
    while (tests--)
      solve();
    return 0;
}


void solve()
{
  std::string s;
  std::cin >> s;

  int curr = 1;
  int total = 0;

  for (int itr = 0; itr < 4; itr++)
  {
    int tmp = int(s[itr] - '0');
    if (tmp)
    {
      total += std::abs(tmp - curr) + 1;
      curr = tmp;
    }
    else
    {
      total += std::abs(10 - curr) + 1;
      curr = 10;
    }
  }
  std::cout << total << '\n';
  return;
}