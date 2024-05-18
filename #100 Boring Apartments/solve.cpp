#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  int tests; cin >> tests;
  while (tests--)
  {
    string x; cin >> x;
    int num = x[0] - '0', length = x.size(), res = 0;

    res += (num - 1) * 10;
    res += (length * (length + 1)) / 2;

    cout << res << "\n";
  }
  return 0;
}