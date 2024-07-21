/*
  author: atef_ai
  created: 19 Jul 2024
  problem: Data Center
*/
#include <iostream>
#include <cmath>
int main(void)
{
  int n;
  std::cin >> n;
  int mx = 1;
  for (int itr = 1; itr <= std::sqrt(n); itr++)
  {
    if (!(n % itr))
    {
      mx = itr;
    }
  }
  std::cout << 2 * (mx + n / mx) << '\n';
  return 0;
}