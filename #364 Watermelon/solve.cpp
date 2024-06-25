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

struct child {
  int row;
  int col;
};


void solve();

int main(void)
{
  int tests = 1;
  while (tests--)
    solve();
  return 0;
}

void solve()
{
  int size;
  std::cin >> size;

  std::cout << (!(size & 1) && size > 2 ? "YES\n" : "NO\n");
  return;
}