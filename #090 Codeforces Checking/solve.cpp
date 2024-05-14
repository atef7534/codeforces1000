#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
  int tests; cin >> tests;
  string s = "codeforces";

  vector<bool> v(26, false);
  for (auto &i: s)
  {
    v[(int)(i - 'a')] = true;
  }

  while (tests--)
  {
    char c; cin >> c;
    if (v[(int)(c - 'a')])
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