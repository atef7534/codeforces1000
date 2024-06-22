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
  int posX,
      posY,
      disOfX,
      disOfY;
  
  std::cin >> posX
           >> posY
           >> disOfX
           >> disOfY;
  
  int diff = posY - posX;
  if (diff % (disOfX + disOfY) || (disOfX + disOfY) > diff)
    std::cout << "-1\n";
  else
    std::cout << diff / (disOfX + disOfY) << '\n';
  return;
}