#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  int tests; cin >> tests;
  while (tests--)
  {
    string s, ans = ""; cin >> s;

    for (int i = 0; s[i] != '\0'; i += 2)
    {
      ans += s[i];
    }
    
    cout << ans + s.back() << "\n";

  }
  return 0;
}