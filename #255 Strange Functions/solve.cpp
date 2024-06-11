#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

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
  std::string s;
  std::cin >> s;
  std::cout << 1LL * int(s.size()) << "\n";
  return;
}