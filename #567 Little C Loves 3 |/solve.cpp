/*
  author: atef_ai
  date: 15 Jul 2024
  problem: Little C Lovers 3 |
*/
#include <iostream>
int main(void)
{
  int n;
  std::cin >> n;
  std::cout << "1 " << std::max(1, n % 3) << ' ' << n - (std::max(1, n % 3) + 1) << '\n';
  return 0;
}
