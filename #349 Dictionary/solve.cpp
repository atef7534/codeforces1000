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
  std::string word;
  std::cin >> word;

  int times = (word.at(0) - 'a') * 25;
  int index = (word.at(1) - 'a') + 1;

  if (word.at(1) > word.at(0))
    --index;

  std::cout << times + index << '\n';
  return;
}
