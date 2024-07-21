/*
  author: atef_ai
  created: 19 Jul 2024
  problem: Exponential Equation
*/
#include <iostream>
int main(void)
{
  int t;
  std::cin >> t;
  while (t--)
  {
    int n;
    std::cin >> n;
    if (n & 1)
    {
      std::cout << -1 << '\n';
    }
    else
    {
      std::cout << 1 << ' ' << n / 2 << '\n';
    }
  }
  return 0;
}