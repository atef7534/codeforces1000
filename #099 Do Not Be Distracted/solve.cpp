#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
  int tests; cin >> tests;
  
  while (tests--)
  {
    int size; cin >> size;
    string s, ss = ""; cin >> s;

    bool ok = true;
    vector<bool> v(26, false);

    for (auto &c: s)
    {
      if (ss.empty())
      {
        ss.push_back(c);
        v[c - 'A'] = true;
      }
      else
      {
        if (ss.back() != c)
        {
          ss.push_back(c);
          if (v[c - 'A'])
          {
            ok = false;
            break;
          }
          else
          {
            v[c - 'A'] = true;
          }
        }
      }
    }
    
    (ok) ? cout << "YES\n" : cout << "NO\n";
  }
  return 0;
}