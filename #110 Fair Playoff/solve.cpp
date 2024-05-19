#include <iostream>

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
  int a, b, c, d; cin >> a >> b >> c >> d;
  if (max(a, b) < min(c, d) || min(a, b) > max(c, d))
  {
    cout << "NO\n";
  }
  else
  {
    cout << "YES\n";
  }

  return;
}