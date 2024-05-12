#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  int tests; cin >> tests;
  while (tests--)
  {
    string s; cin >> s;
    int p = 1;
    bool ok = false;
    for (int i = 0; s[i + 1] != '\0'; i++)
    {
      p += (s[i] != s[i + 1]);
      ok |= (s[i] == '0' && s[i + 1] == '1');
    }
    cout << p - ok << "\n";
  }

  return 0;
}