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

  int total = 0;
  for (int itr = 0; itr < n - 1; itr++)
    total += 2 * (2 * itr + 1);
  total += (--n * 2) + 1;

  std::cout << total << '\n';
  return;
}