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
  int a, b, c; cin >> a >> b >> c;
  if (a < b && b < c)
  {
    cout << "STAIR\n";
  }
  else if (a < b && b > c)
  {
    cout << "PEAK\n";
  }
  else
  {
    cout << "NONE\n";
  }

  return;
};
