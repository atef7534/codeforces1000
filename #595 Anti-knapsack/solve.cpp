/*
  author: atef_ai
  created: 18 Jul 2024
  problem: Anti-knapsack
*/
#include <iostream>
int main(void)
{
  int t;
  std::cin >> t;
  while (t--)
  {
    int n, k, itr;
    std::cin >> n >> k;
    if (!(n - 1) && !(k - 1))
    {
      std::cout << 0 << '\n';
      continue;
    }
    std::cout << n - ((k + 1) / 2) << '\n';
    for (int itr = (k + 1) / 2; itr <= n; itr++)
    {
      if (itr == k)
      {
        continue;
      }
      std::cout << itr << ' ';
    }
    std::cout << '\n';
  }
  return 0;
}