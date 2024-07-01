#include <algorithm>
#include <cmath>
#include <iostream>
#include <limits>
#include <map>
#include <vector>


void solve();

int main()
{
    int tests;
    std::cin >> tests;
    while (tests--)
      solve();
    return 0;
}


void solve()
{
  int x;
  std::cin >> x;

  if (x < 31)
    return void(std::cout << "NO\n");
  
  if (x == 46)
    return void(std::cout << "YES\n6 10 14 16\n");

  std::cout << "YES\n";
  std::cout << "6 10 " << (x & 1 ? "14 " : "15 ");
  std::cout << (x & 1 ? x - 30 : x - 31) << '\n';
  return;
}