#include <algorithm>
#include <iostream>
#include <string>

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
  string s; cin >> s;

  if (size != 5)
  {
    cout << "NO\n";
    return;
  }

  string t = "Timur";

  sort(s.begin(), s.end());
  sort(t.begin(), t.end());

  if (s.compare(t) != 0)
  {
    cout << "NO\n";
  }
  else
  {
    cout << "YES\n";
  }

  return;
}