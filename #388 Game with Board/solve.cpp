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
  int num;
  std::cin >> num;
  std::cout << (num <= 4 ? "Bob\n" : "Alice\n");
  return;
}