#include <iostream>

using namespace std;

void solve();



int main(void)
{
  solve();
  return 0;
}

void solve()
{
  int n, height = 0, sum = 0; cin >> n;
  while (sum <= n)
  {
    sum += (++height * (height + 1)) / 2;
  }

  cout << height - 1 << "\n";
  return;
}