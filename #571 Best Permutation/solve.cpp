/*
  author: atef_ai
  date: 15 Jul 2024
  problem: Best Permutation
*/
#include <iostream>
#include <vector>
#include <algorithm>
int main(void)
{
  int tests;
  std::cin >> tests;
  while (tests--)
  {
    int n;
    std::cin >> n;
    if (!(n & 1))
    {
      for (int itr = n - 2; itr >= 1; itr--)
      {
        std::cout << itr << ' ';
      }
      std::cout << n - 1 << ' ' << n << '\n';
    }
    else
    {
      std::cout << "1 2 3 ";
      for (int itr = n - 2; itr >= 4; itr--)
      {
        std::cout << itr << ' ';
      }
      std::cout << n - 1 << ' ' << n << '\n';
    }
  }
  return 0;
}