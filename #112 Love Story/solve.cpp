#include <iostream>
#include <string>

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
  string s, code = "codeforces"; cin >> s;
  int c = 0;
  for (int i = 0; s[i] != '\0'; i++)
  {
    if (s[i] != code[i])
      ++c;
  }
  cout << c << "\n";
  return;
};
