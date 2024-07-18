/*
  author: atef_ai
  created: 16 Jul 2024
  problem: Water Buying
*/
#include <iostream>
int main(void)
{
  int tests;
  std::cin >> tests;
  while (tests--)
  {
    long long ni, ai, bi;
    std::cin >> ni >> ai >> bi;
    if (2 * ai <= bi)
    {
      std::cout << ni * ai << '\n';
    }
    else
    {
      std::cout << (ni & 1) * ai + bi * (ni / 2) << '\n';
    }
  }
  return 0;
}