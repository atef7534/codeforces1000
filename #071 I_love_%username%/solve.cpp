#include <iostream>

using namespace std;

int main(void)
{
  int tests; cin >> tests;
  int mn = 10001, mx = -1, count = 0;
  while (tests--)
  {
    int c; cin >> c;
    if (mx == -1) {
      mx = c;
    }
    else
    {
      if (c > mx)
      {
        count++;
        mx = c;
      }
    }

    if (mn == 10001)
    {
      mn = c;
    }
    else
    {
      if (c < mn)
      {
        count++;
        mn = c;
      }
    }
  }

  cout << count << "\n";

  return 0;
}