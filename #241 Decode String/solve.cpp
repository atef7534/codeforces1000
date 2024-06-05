#include <algorithm>
#include <iostream>
#include <string>

void solve();
int main(void)
{
  int t;
  std::cin >> t;
  while (t--)
    solve();
  return 0;
}

void solve()
{
  int n, i, t;
  std::cin >> n;

  std::string s, r = "";
  std::cin >> s;

  for (i = n - 1; i >= 0; i--)
  {
    if (s[i] == '0') 
    {
      int x = int(s[i - 2] - '0') * 10 + int(s[i - 1] - '0');
      r += char(x + 'a' - 1);
      i -= 2;
    }
    else
      r += char(int(s[i] - '0') - 1 + 'a');
  }
  std::reverse(r.begin(), r.end());
  std::cout << r << "\n";
  return;
}