#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  int tests; cin >> tests;
  while (tests--)
  {
    string s; cin >> s;
    for (int i = 0; s[i] != '\0'; i++)
    {
      s[i] = toupper(s[i]);
    }

    if (s.compare("YES") == 0)
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