#include <algorithm>
#include <iostream>
#include <vector>

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
  int n, i;
  std::cin >> n;

  std::string s;
  std::cin >> s;

  s += 'X';
  for (i = 0; i < n; i++)
  {
    if (s[i] == 'L' && s[i + 1] == 'R' || s[i] == 'R' && s[i + 1] == 'L' ||
        s[i] == 'U' && s[i + 1] == 'D' || s[i] == 'D' && s[i + 1] == 'U')
    {
      std::cout << s[i] << s[i + 1];
      i++;
      continue;
    }

    if (s[i] == 'U')
      std::cout << 'D';
    else if (s[i] == 'D')
      std::cout << 'U';
    else if (s[i] == 'R')
      std::cout << 'L';
    else
      std::cout << 'R';
  }
  std::cout << "\n";
  return;
}