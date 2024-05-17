#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
  int tests; cin >> tests;

  while (tests--)
  {
    int size; cin >> size;
    vector<int> v(size);

    int z = 0, o = 0;
    for (int i = 0; i < size; i++)
    {
      int x; cin >> x;
      x %= 2;

      if (i % 2 != x)
      {
        o += (i & 1) ? 1 : 0;
        z += (!(i & 1)) ? 1: 0;
      }
      
    }
    if (o != z)
    {
      cout << "-1\n";
    }
    else
    {
      cout << o << "\n";
    }
  }
  return 0;
}