#include <iostream>

using namespace std;

int main(void)
{
  int tests; cin >> tests;
  while (tests--)
  {
    int a, b, c; cin >> a >> b >> c;
    if (a - b == c)
    {
      cout << "-\n";
    }
    else
    {
      cout << "+\n";
    }
  }
  return 0;
}