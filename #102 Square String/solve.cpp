#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  int tests; cin >> tests;
  while (tests--)
  {
    string s; cin >> s;

    int size = s.size();
    if (size & 1)
    {
      cout << "NO\n";
    }
    else
    {
      bool ok = true;
      int i = size / 2 - 1, j = size - 1;
      while (i >= 0)
      {
        if (s[i] != s[j])
        {
          ok = false;
          break;
        }
        i--, j--;
      }
      (ok) ? cout << "YES\n" : cout << "NO\n";
    }
  }
  return 0;
}