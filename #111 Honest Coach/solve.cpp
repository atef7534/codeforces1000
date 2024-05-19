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
  int size; cin >> size;
  vector<int> v(size);

  for (int i = 0; i < size; i++)
  {
    cin >> v[i];
  }

  sort(v.begin(), v.end());

  int res = numeric_limits<int>::max();
  for (int i = 1; i < size; i++)
  {
    res = min(res, v[i] - v[i - 1]);
  }

  cout << res << "\n";
  return;
}
