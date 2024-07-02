#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>

int main(void)
{
  int tests;
  std::cin >> tests;

  while (tests--)
  {
    int n, m, r, c;
    std::cin >> n >> m >> r >> c;

    std::vector<std::vector<char>> grid(n, std::vector<char>(m, '\0'));
    bool found = false;
    bool pos = false;
    for (int itr = 0; itr < n; itr++)
    {
      for (int itrj = 0; itrj < m; itrj++)
      {
        std::cin >> grid.at(itr).at(itrj);
        found |= (grid.at(itr).at(itrj) == 'B');
        pos |= (grid.at(itr).at(itrj) == 'B' && (itr == r - 1 || itrj == c - 1));
      }
    }
    if (grid.at(r - 1).at(c - 1) == 'B')
    {
      std::cout << "0\n";
      continue;
    }
    if (found) 
    {
      std::cout << 2 - pos << '\n';
    }
    else
    {
      std::cout << "-1\n";
    }
  }
  return 0;
}