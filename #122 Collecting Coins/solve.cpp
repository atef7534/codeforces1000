#include <iostream>



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
  int a, b, c, n; 
  cin >> a >> b >> c >> n;

  int mx = max(a, max(b, c));

  if (mx - a > n)
  {
    cout << "NO\n";
    return;
  }
  n -= (mx - a);
  a = mx;

  if (mx - b > n)
  {
    cout << "NO\n";
    return;
  }
  n -= (mx - b);
  b = mx;

  if (mx - c > n)
  {
    cout << "NO\n";
    return;
  }

  n -= (mx - c);
  c = mx;

  if (!(n % 3))
  {
    cout << "YES\n";
  }
  else
  {
    cout << "NO\n";
  }

  return;
}