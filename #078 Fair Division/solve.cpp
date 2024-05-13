#include <iostream>


using namespace std;

int main(void)
{
  int tests; cin >> tests;
  while (tests--)
  {
    int n; cin >> n;

    int c1 = 0, c2 = 0;
    for (int i = 0; i < n; i++)
    {
      int x; cin >> x;
      c1 += (x == 1);
      c2 += (x == 2) ? 2 : 0;
    }

    c2 %= 4;

    if ((c2 == 2 && c1 % 2 == 0 && c1 != 0) || (c2 == 0 && !(c1 & 1)))
    {
      cout << "YES\n";
    }
    else
    {
      cout << "NO\n";
    }
  }
  return 0;
}