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
  std::string a, b, c;
  std::getline(std::cin, a);
  std::getline(std::cin, b);
  std::getline(std::cin, c);

  std::string vowels = "aeiou";
  int ca = std::count_if(a.begin(), a.end(), [&] (char c) {
    return vowels.find(c) != std::string::npos;
  });
  int cb = std::count_if(b.begin(), b.end(), [&] (char c) {
    return vowels.find(c) != std::string::npos;
  });
  int cc = std::count_if(c.begin(), c.end(), [&] (char c) {
    return vowels.find(c) != std::string::npos;
  });

  if (ca == 5 && cb == 7 && cc == 5)
    std::cout << "YES\n";
  else
    std::cout << "NO\n";
  return;
}
