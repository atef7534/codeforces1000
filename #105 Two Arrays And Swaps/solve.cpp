#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
  int tests; cin >> tests;

  while (tests--)
  {
    int n, k; cin >> n >> k;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
      cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int sum = 0, i;
    for (i = 0; i < n && k; i++)
    {
      if (a[i] < b[n - i - 1])
      {
        swap(a[i], b[n - i - 1]);
        k--;
      }
      sum += a[i];
    }
    for (i; i < n; i++)
    {
      sum += a[i];
    }

    cout << sum << "\n";

  }
  return 0;
}