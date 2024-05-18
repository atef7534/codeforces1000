#include <iostream>

using namespace std;

int main(void)
{
  int tests; cin >> tests;
  while (tests--)
  {
    int n; cin >> n;

    if (n % 3 == 0)
    {
      cout << n / 3 << " " << n / 3 << "\n";
    }
    else
    {
      if (n % 3 == 2)
      {
        cout << n / 3 << " " << n / 3 + 1 << "\n";
      }
      else
      {
        cout << n / 3 + 1 << " " << n / 3 << "\n";
      }
    }
  }
  return 0;
}