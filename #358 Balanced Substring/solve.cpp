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

  int position = -1;
  char last = '\0';
  
  for (int itr = 0; itr < size; itr++)
  {
    char tmp;
    std::cin >> tmp;

    if (itr && tmp != last)
      position = itr;
    last = tmp;
  }

  if (position == -1)
    std::cout << "-1 -1\n";
  else
    std::cout << position << ' ' << position + 1 << '\n';
  return;
}
