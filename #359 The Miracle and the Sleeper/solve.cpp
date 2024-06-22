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

  if (sNum >> 1 >= fNum)
    std::cout << (sNum + 1) / 2 - 1 << '\n';
  else
    std::cout << sNum % fNum << '\n';
  return;
}