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

  int diff = (sNum / fNum);
  if (sNum % fNum)
    return static_cast<void> (std::cout << "0 0\n");
  
  std::cout << "1 " << std::max(1, diff) << '\n';
  return;
}
