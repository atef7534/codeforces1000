#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  int tt; cin >> tt;
  while (tt--)
  {
    string s; cin >> s;
    int first = 0, last = 0;
    for (int i = 0; i < 3; i++)
    {
      first += (int)(s[i] - '0');
      last += (int)(s[i + 3] - '0');
    }

    if (first == last)
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