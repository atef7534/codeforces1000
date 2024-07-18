/*
  author: atef_ai
  created: 17 Jul 2024
  problem: Tenzing and Tsondu
*/
#include <iostream>
int main(void)
{
  int tests;
  std::cin >> tests;
  while (tests--)
  {
    int n, m;
    std::cin >> n >> m;
    long long totaln = 0, totalm = 0;
    for (int itr = 0; itr < n; itr++)
    {
      int tmpn;
      std::cin >> tmpn;
      totaln += tmpn;
    }
    for (int itr = 0; itr < m; itr++)
    {
      int tmpm;
      std::cin >> tmpm;
      totalm += tmpm;
    }
    if (totaln == totalm)
    {
      std::cout << "Draw\n";
    }
    else if (totaln > totalm)
    {
      std::cout << "Tsondu\n";
    }
    else
    {
      std::cout << "Tenzing\n";
    }
  }
  return 0;
}