#include <iostream>

using namespace std;
void solve();

int main()
{
  int tt; cin >> tt;
  while (tt--)
  {
    solve();
  }
  return 0;
}

void solve()
{
  int n; cin >> n;
  cout << (n + 2) / 2 << "\n";
  return;
}