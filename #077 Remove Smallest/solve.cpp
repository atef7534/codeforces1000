#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main(void)
{
  int tests; cin >> tests;
  while (tests--)
  {
    int size; cin >> size;
    vector<int> v, freqs(101, 0);

    for (int i = 0; i < size; i++)
    {
      int x; cin >> x;
      freqs[x]++;

      if (freqs[x] == 1)
      {
        v.push_back(x);
      }
    }

    sort(v.begin(), v.end());

    bool ok = true;
    for (int i = 1, n = v.size(); i < n; i++)
    {
      ok &= (v[i] - v[i - 1] == 1);
    }

    if (ok)
    {
      cout << "YES\n";
    }
    else
    {
      cout << "NO\n";
    }
  }

  return 0;
}