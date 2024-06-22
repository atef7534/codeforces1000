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
  int size;
  std::cin >> size;

  bool yes = true;
  char minDigit = '0', 
       minLetter = 'a';

  bool letterBefore = true;
  for (int itr = 0; itr < size; itr++)
  {
    char tmp;
    std::cin >> tmp;

    if (!((tmp >= '0' && tmp <= '9') || (tmp >= 'a' && tmp <= 'z')))
      yes = false;
    
    if (tmp >= '0' && tmp <= '9')
    {
      yes &= (letterBefore && tmp >= minDigit);
      minDigit = std::max(minDigit, tmp);
    }
    
    if (tmp >= 'a' && tmp <= 'z')
    {
      letterBefore = false;
      yes &= (tmp >= minLetter);
      minLetter = std::max(minLetter, tmp);
    }
  }

  std::cout << (yes ? "YES\n" : "NO\n");
  return;
}
