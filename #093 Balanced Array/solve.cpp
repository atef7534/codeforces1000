#include <iostream>
#include <vector>

using namespace std;

template<typename T>
ostream& operator<<(ostream& os, vector<T>& v)
{
  for (size_t i = 0, n = v.size(); i < n; i++)
  {
    os << v[i] << " ";
  }

  return os;
}
int main(void)
{
  int tests; cin >> tests;
  while (tests--)
  {
    int n; cin >> n;
    
    if ((n / 2) & 1)
    {
      cout << "NO\n";
      continue;
    }

    vector<int> v;
    for (int i = 1; i <= n / 2; i++)
    {
      v.push_back(2 * i);
    }

    int i;
    for (i = 0; i < n / 2 - 1; i++)
    {
      v.push_back(2 * i + 1);
    }

    cout << "YES\n";
    cout << v << v[n / 2 - 1] + n / 2 - 1 << "\n";
  }

  return 0;
}