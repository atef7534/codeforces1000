#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <set>
#include <string>
#include <vector>


void solve();
int equo(int x, int n);

int main(void)
{
  int t = 1;
  while (t--)
    solve();
  return 0;
}

void solve()
{
  int n;
  std::cin >> n;

  int x = 0;
  while (equo(x, n) < n)
    x++;
  
  if (equo(x, n) == n)
    std::cout << "YES\n";
  else
    std::cout << "NO\n";
  return;
}

int equo(int x, int n)
{
  int t = (x * (x + 1)) / 2;
  return t;
}