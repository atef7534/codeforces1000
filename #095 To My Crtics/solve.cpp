#include <iostream>

using namespace std;

int main(void)
{
  int tests; cin >> tests;
  while (tests--)
  {
    int a, b, c; cin >> a >> b >> c;
    int sum = a + b + c;
    if (sum - a >= 10 || sum - b >= 10 || sum - c >= 10)
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