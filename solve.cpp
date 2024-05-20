#include <iostream>

using namespace std;
void solve();
int gcd(int a, int b);

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
  int a, b; cin >> a >> b;
  
  cout << gcd(a, b) << "\n";
  return;
};

int gcd(int a, int b)
{
  if (b == 0)
  {
    return a;
  }

  return gcd(b, a % b);
}
