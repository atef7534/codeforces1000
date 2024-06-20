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

  std::string vowels = "IOUEAY";
  for (auto &i: s)
  {
    if (vowels.find(toupper(i)) != std::string::npos)
      continue;
    char c = tolower(i);
    std::cout << '.' << c;
  }
  std::cout << '\n';
  return;
}
