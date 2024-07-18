/*
  author: atef_ai
  date: 15 Jul 2024
  problem: Working Week
*/
#include <iostream>
#include <algorithm>
int main(void)
{
  int tests;
  std::cin >> tests;
  while (tests--)
  {
    int n;
    std::cin >> n;
    if (n < 9)
    {
      std::cout << "0\n";
      continue;
    }
    if (n % 3 == 2)
    {
      n--;
    }
    int l1 = 1;
    int l2 = (n - 3) / 3 + (n - 3) % 3;
    int l3 = (n - 3) / 3 + (n - 3) / 3;
    std::cout << std::min({abs(l1 - l2), abs(l1 - l3), abs(l2 - l3)}) << '\n';
  }
  return 0;
}