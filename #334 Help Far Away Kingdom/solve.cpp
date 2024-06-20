#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <set>
#include <string>
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
  std::string s;
  std::cin >> s;

  int dot = s.find('.');
  if (s.at(dot - 1) == '9')
    std::cout << "GOTO Vasilisa.\n";
  else
    std::cout << s.substr(0, dot - 1) << (s.at(dot + 1) >= '5' && s.at(dot + 1) <= '9' ? s.at(dot - 1) - '0' + 1 : s.at(dot - 1) - '0') << '\n';
  return;
}
