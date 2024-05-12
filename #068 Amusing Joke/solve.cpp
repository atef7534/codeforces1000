#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
  string a, b, c; cin >> a >> b >> c;
  vector<int> v(26, 0), z(26, 0);

  for (int i = 0; a[i] != '\0'; i++)
  {
    v[a[i] - 'A']++;
  }

  for (int i = 0; b[i] != '\0'; i++)
  {
    v[b[i] - 'A']++;
  }

  for (int i = 0; c[i] != '\0'; i++)
  {
    z[c[i] - 'A']++;
  }

  bool ok = true;
  for (int i = 0; i < 26; i++)
  {
    ok &= (z[i] == v[i]);
  }

  if (ok)
  {
    cout << "YES\n";
  }
  else
  {
    cout << "NO\n";
  }

  return 0;
}