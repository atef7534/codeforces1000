#include <iostream>
#include <string>
#include <vector>

using namespace std;
void solve();

int main(void)
{
  int tests; cin >> tests;
  while (tests--)
  {
    solve();
  }
  return 0;
}

void solve()
{
  int size; cin >> size;
  string s; cin >> s;

  vector<int> v(26, -1);
  bool ok = true;

  v[s[0] - 'a'] = 0;
  for (int i = 1; i < size; i++)
  {
    if (v[s[i] - 'a'] == -1)
    {
      v[s[i] - 'a'] = i;
    } 
    else
    {
      if ((v[s[i] - 'a'] % 2 != i % 2 && s[i] == s[v[s[i] - 'a']]))
      {
        ok = false;
        break;
      }
      v[s[i] - 'a'] = i;
    }
  }

  if (ok)
  {
    cout << "YES\n";
  }
  else
  {
    cout << "NO\n";
  }

  return;
}