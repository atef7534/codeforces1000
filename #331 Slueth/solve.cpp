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
  std::getline(std::cin, s);

  int i;
  for (i = int(s.size()) - 1; i >= 0 && (s.at(i) == ' ' || s.at(i) == '?'); i--);

  std::string f = "AEIOUY";
  char c = toupper(s.at(i));

  if (f.find(c) != std::string::npos)
    std::cout << "YES\n";
  else
    std::cout << "NO\n";
  return;
}
