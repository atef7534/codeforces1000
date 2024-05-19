#include <iostream>
#include <string>

using namespace std;
void solve();


int main(void)
{
  int tests; cin >> tests;
  while (tests--)
  {
    solve();
  }
  return 0;
}

void solve()
{
  int n, x, floor = 1; cin >> n >> x;
  if (n <= 2)
  {
    cout << floor << "\n";
    return;
  }
  int track = 2;
  while (track < n)
  {
    floor++;
    track += x;
  }
  
  cout << floor << "\n";
  return;
};
