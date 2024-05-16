#include <iostream>

using namespace std;

int main(void)
{
  int tests; cin >> tests;
  while (tests--)
  {
    int a, b, c;
    cin >> a >> b >> c;

    if (a > b)
    {
      swap(a, b);
    }

    if (b > c)
    {
      swap(b, c);
    }

    if (a > b)
    {
      swap(a, b);
    }
    cout << b << "\n";
  }
}