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
  int size;
  std::cin >> size;

  int mn = std::numeric_limits<int>::max(),
      mx = std::numeric_limits<int>::min();

  for (int itr = 0; itr < size; itr++)
  {
    int num;
    std::cin >> num;

    mn = std::min(mn, num);
    mx = std::max(mx, num);
  }
  
  std::cout << mx - mn - size << '\n';
  return;
}