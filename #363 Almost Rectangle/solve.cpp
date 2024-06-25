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

struct child {
  int row;
  int col;
};


void solve();

int main(void)
{
  int tests;
  std::cin >> tests;
  while (tests--)
    solve();
  return 0;
}

void solve()
{
  int size;
  std::cin >> size;

  std::vector<std::string> grid;

  bool turn = false;
  child starOne, starTwo;

  for (int itr = 0; itr < size; itr++)
  {
    std::string tmp;
    std::cin >> tmp;

    for (int itrj = 0; itrj < size; itrj++)
    {
      if (tmp.at(itrj) == '*')
      {
        if (!turn)
        {
          starOne.row = itr;
          starOne.col = itrj;
          turn = true;
        }
        else
        {
          starTwo.row = itr;
          starTwo.col = itrj;
        }
      }
    }
    grid.push_back(tmp);
  }

  if (starOne.row == starTwo.row)
  {
    if (starOne.row != 0)
      grid[0][starOne.col] = '*', grid[0][starTwo.col] = '*';
    else
      grid[size - 1][starOne.col] = '*', grid[size - 1][starTwo.col] = '*';
  }
  else if (starOne.col == starTwo.col)
  {
    if (starTwo.col != 0)
      grid[starOne.row][0] = '*', grid[starTwo.row][0] = '*';
    else
      grid[starOne.row][size - 1] = '*', grid[starTwo.row][size - 1] = '*';
  }
  for (int itr = 0; itr < size; itr++)
  {
    for (int itrj = 0; itrj < size; itrj++)
    {
      if (itr == starOne.row && itrj == starTwo.col || itrj == starOne.col && itr == starTwo.row)
        std::cout << '*';
      else
        std::cout << grid.at(itr).at(itrj);
    }
    std::cout << '\n';
  }

  return;
}