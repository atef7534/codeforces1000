/*
  author: atef_ai
  created: 17 Jul 2024
  problem: Even Subset Sum Problem
*/
#include <iostream>
#include <vector>
int main(void)
{
  int tests;
  std::cin >> tests;
  while (tests--)
  {
    int n;
    std::cin >> n;
    std::vector<std::pair<int, int>> odds, evens;
    for (int itr = 0; itr < n; itr++)
    {
      int tmp;
      std::cin >> tmp;
      if (tmp & 1)
      {
        odds.push_back(std::make_pair(tmp, itr + 1));
      }
      else
      {
        evens.push_back(std::make_pair(tmp, itr + 1));
      }
    }
    if (int(odds.size()) == 1 && evens.empty())
    {
      std::cout << "-1\n";
    }
    else
    {
      if (!evens.empty())
      {
        std::cout << "1\n" << evens.at(0).second << '\n';
      }
      else if (int(odds.size()) > 1)
      {
        int itr = 0, p = 0;
        for (itr; itr < (int)odds.size() - 1; itr++)
        {
          if (odds.at(itr).second + 1 == odds.at(itr + 1).second)
          {
            p = 1;
            std::cout << "2\n";
            std::cout << odds.at(itr).second << ' ';
            std::cout << odds.at(itr + 1).second << '\n';
            break;
          }
        }
        if (!p)
        {
          std::cout << "-1\n";
        }
      }
    }
  }
  return 0;
}