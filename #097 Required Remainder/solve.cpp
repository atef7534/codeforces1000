#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
  int tests; cin >> tests;

  while (tests--)
  {
    int x, y, n; cin >> x >> y >> n;
    if (y == 0)
    {
      cout << n - (n % x) << "\n";
      continue;
    }
    
    int mod = n % x;
    if (mod == y)
    {
      cout << n << "\n";
    }
    else
    {
      if (mod > y)
      {
        mod -= y;
        cout << n - mod << "\n";
      }
      else
      {
        n -= (mod + x - y);
        cout << n << "\n";
      }
    }
  }
  
  return 0;
}