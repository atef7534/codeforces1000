#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <limits>
#include <string>
#include <cmath>

void solve();
int main(void)
{
  int t = 1;
  while (t--)
    solve();
  return 0;
}

void solve()
{
  int a, b, n;
  std::cin >> a >> b >> n;

  bool turn = true;
  while (n)
  {
    int x = (turn) ? std::__gcd(a, n) : std::__gcd(b, n);

    if (x >= n)
      return static_cast<void> (std::cout << (turn ? "0\n" : "1\n"));
    
    n -= x;
    turn = !turn;
  }
  return;
}