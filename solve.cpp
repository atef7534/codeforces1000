#include <algorithm>
#include <iostream>
#include <limits>
#include <map>
#include <vector>

void solve();

int main()
{
    int tests = 1;
    while (tests--)
      solve();
    return 0;
}


void solve()
{
  int n;
  std::cin >> n;

  std::cout << n * n + --n * n << '\n';
  return;
}