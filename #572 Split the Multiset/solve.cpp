/*
  author: atef_ai
  date: 15 Jul 2024
  problem: Split the Multiset
*/
#include <iostream>
#include <algorithm>
int main(void)
{
  int tests;
  std::cin >> tests;
  while (tests--)
  {
    int n, k;
    std::cin >> n >> k;
    int p = (n - n % (k - 1)) / (k - 1) + (n % (k - 1) > 1);
    if (p == n)
    {
      p--;
    }
    std::cout << p << '\n';
  }
  return 0;
}