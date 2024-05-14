#include <iostream>

using namespace std;

int main(void)
{
  int tt; cin >> tt;
  while (tt--)
  {
    int a, b; cin >> a >> b;
    int diff = abs(b - a);

    int ans = diff / 10 + (diff % 10 != 0);
    cout << ans << "\n";
  }
  return 0;
}