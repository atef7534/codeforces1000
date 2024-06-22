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
  int fNum, 
      sNum;
  std::cin >> fNum
           >> sNum;
  
  std::cout << ((!(fNum % sNum) && sNum > 1) ? "YES\n" : "NO\n");
  return;
}
