#include <iostream>
#include <numeric>
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
  int size, p = 0; cin >> size;
  vector<int> v(size);

  for (int i = 0; i < size; i++)
  {
    cin >> v[i];
    p += v[i];
  }

  bool ok = false;
  for (auto &i: v)
  {
    if (i % 2 == (p - i) % 2)
    {
      ok = true;
      break;
    }
  }

  (ok) ? cout << "YES\n" : cout << "NO\n";
  return;
}