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
}

void solve()
{
  int a, b;
  char c; 
  cin >> a >> c >> b;
  cout << a + b << "\n";

  return;
}