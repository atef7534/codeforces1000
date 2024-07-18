/*
  author: atef_ai
  created: 18 Jul 2024
  problem: Specific Tastes of Andre
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
    for (int itr = 0; itr < n; itr++)
    {
      std::cout << n << ' ';
    }
    std::cout << '\n';
  }
  return 0;
}