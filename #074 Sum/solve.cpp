#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
  int tests; cin >> tests;
  vector<int> v(3, 0);
  while (tests--)
  {
    for (int i = 0; i < 3; i++)
    {
      cin >> v[i];
    }

    sort(v.begin(), v.end());

    int last = v.back();
    if (v[0] + v[1] == last)
    {
      cout << "YES\n";
    }
    else
    {
      cout << "NO\n";
    }
  }
}