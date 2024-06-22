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
  int t;
  std::cin >> t;
  while (t--)
    solve();
  return 0;
}

void solve()
{
  int introverts,
      extroverts,
      universals;
  
  std::cin >> introverts
           >> extroverts
           >> universals;
  
  int tents = introverts + extroverts / 3;

  extroverts %= 3;
  if (extroverts != 0)
  {
    if (universals + extroverts < 3)
      return static_cast<void> (std::cout << "-1\n");
    ++tents;
    universals -= (3 - extroverts);
  }

  tents += (2 + universals) / 3;
  std::cout << tents << '\n';
  return;
}
