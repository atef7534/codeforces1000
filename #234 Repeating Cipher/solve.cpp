#include <algorithm>
#include <iostream>
#include <vector>

void solve();
int main(void)
{
  int t = 1;

  while (t--)
    solve();
  
  return 0;
}

void solve()
{
  int n, i, t = 1;
  std::cin >> n;
  
  std::string s;
  std::cin >> s;

  for (i = 0; i < n; i += t++)
    std::cout << s[i];
  std::cout << "\n";
  return;
}