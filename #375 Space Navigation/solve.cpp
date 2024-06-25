#include <algorithm>
#include <iostream>
#include <limits>
#include <vector>

void solve();
std::vector<int> getFreqs(std::string str);


int main()
{
    int tests;
    std::cin >> tests;
    while (tests--)
      solve();
    return 0;
}


void solve()
{
  int px, py;
  std::cin >> px >> py;

  int up = 0,
      down = 0,
      left = 0,
      right = 0;
  
  std::string str;
  std::cin >> str;

  for (int itr = 0; str[itr] != '\0'; itr++)
  {
    char tmp = str[itr];
    if (tmp == 'R')
      ++right;
    else if (tmp == 'L')
      --left;
    else if (tmp == 'U')
      ++up;
    else
      --down;
  }
  if (left <= px && right >= px && down <= py && up >= py)
    std::cout << "YES\n";
  else
    std::cout << "NO\n";
  return;
}