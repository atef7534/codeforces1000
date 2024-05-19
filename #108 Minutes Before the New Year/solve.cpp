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
  int a, b; cin >> a >> b;
  
  cout << (24 - ++a) * 60 + (60 - b) << "\n";
  return;
}