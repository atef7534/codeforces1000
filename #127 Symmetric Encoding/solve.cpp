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
  vector<int> v(26, 0);

  string s; cin >> s;

  for (auto &i: s)
  {
    v[i - 'a'] = 1;
  }

  string r = "";
  for (int i = 0; i < 26; i++)
  {
    if (v[i])
    {
      char c = char('a' + i);
      r += c;
    }
  }

  vector<char> vec(26);
  for (int left = 0, right = r.size() - 1; left <= right; left++, right--)
  {
    vec[r[left] - 'a'] = r[right];
    vec[r[right] - 'a'] = r[left];
  }
  
  for (auto &c: s)
  {
    cout << vec[c - 'a'];
  }
  cout << "\n";
  return;
}