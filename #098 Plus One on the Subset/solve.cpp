#include <iostream>
#include <limits>

using namespace std;

int main(void)
{
  int tests; cin >> tests;

  
  while (tests--)
  {
    int size; cin >> size;
    int mn = numeric_limits<int>::max(), mx = numeric_limits<int>::min();
    for (int i = 0; i < size; i++)
    {
      int x; cin >> x;
      mn = min(mn, x);
      mx = max(mx, x);
    }

    cout << mx - mn << "\n";
  }
  return 0;
}