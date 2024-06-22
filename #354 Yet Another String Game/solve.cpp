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
  int tests;
  std::cin >> tests;
  while (tests--)
    solve();
  return 0;
}

void solve()
{
  std::string txt;
  std::cin >> txt;

  for (int itr = 0; txt[itr] != '\0'; itr++)
  {
    if (!(itr & 1))
    {
      if (txt[itr] == 'a')
        std::cout << 'b';
      else
        std::cout << 'a';
    }
    else
    {
      if (txt[itr] == 'z')
        std::cout << 'y';
      else
        std::cout << 'z';
    }
  }
  std::cout << '\n';
  return;
}
