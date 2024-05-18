#include <iostream>

using namespace std;

int main(void)
{
  int tests; cin >> tests;
  while (tests--)
  {
    int a, b, ans; cin >> a >> b;
    ans = min(max(a, b * 2), max(a * 2, b));
    cout << ans * ans << "\n";
  }
  return 0;
}