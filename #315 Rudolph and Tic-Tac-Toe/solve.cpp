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
  std::vector<std::vector<char>> a(3, std::vector<char>(3, '\0'));
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      std::cin >> a.at(i).at(j);
  
  for (int i = 0; i < 3; i++)
  {
    if (a.at(i).at(0) == a.at(i).at(1) && a.at(i).at(1) == a.at(i).at(2) && a.at(i).at(2) != '.')
      return static_cast<void> (std::cout << a.at(i).at(0) << '\n');
    if (a.at(0).at(i) == a.at(1).at(i) && a.at(1).at(i) == a.at(2).at(i) && a.at(2).at(i) != '.')
      return static_cast<void> (std::cout << a.at(0).at(i) << '\n');
  }
  
  if (a.at(0).at(0) == a.at(1).at(1) && a.at(1).at(1) == a.at(2).at(2) && a.at(0).at(0) != '.')
    return static_cast<void> (std::cout << a.at(0).at(0) << '\n');
  
  if (a.at(0).at(2) == a.at(1).at(1) && a.at(1).at(1) == a.at(2).at(0) && a.at(1).at(1) != '.')
    return static_cast<void> (std::cout << a.at(1).at(1) << '\n');
  
  std::cout << "DRAW\n";
  return;
}
