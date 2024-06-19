#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <limits>
#include <string>
#include <cmath>
#include <set>


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
  int n;
  std::cin >> n;

  std::string s, t = "";
  std::cin >> s;

  int i, x;
  for (i = 0, x = int(s.size()); i < x; i++)
    t += s.at(i);
  
  std::reverse(t.begin(), t.end());

  if (s > t)
  {
    if (n & 1)
      return static_cast<void> (std::cout << t << '\n');
    else
      return static_cast<void> (std::cout << t << s << '\n');
  }
  std::cout << s << '\n';
  return;
}
