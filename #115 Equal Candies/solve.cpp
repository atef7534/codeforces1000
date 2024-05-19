#include <algorithm>
#include <iostream>
#include <limits>
#include <vector>
using namespace std;
void solve();

int main(void)
{
  int tests; cin >> tests;
  while (tests--)
  {
    solve();
  }
  return 0;
}

void solve()
{
  int n, mn = numeric_limits<int>::max(); cin >> n;
  vector<int> v(n);

  for (auto &i: v)
  {
    cin >> i;
    mn = min(mn, i);
  }

  int sum = 0;
  for (const auto &i: v)
  {
    sum += (i - mn);
  }

  cout << sum << "\n";
  return;
}