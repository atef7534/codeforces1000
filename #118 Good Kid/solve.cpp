#include <algorithm>
#include <iostream>
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

  int l = 1;
  long long product = 1;
  for (auto &i: v)
  {
    cin >> i;
  }

  sort(v.begin(), v.end());
  v[0]++;
  for (auto &i: v)
  {
    product *= i;
  }

  cout << product << "\n";
  return;
}