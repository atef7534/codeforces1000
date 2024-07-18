/*
  author: atef_ai
  created: 18 Jul 2024
  problem: Array and Peaks
*/
#include <iostream>
int main(void)
{
  int t;
  std::cin >> t;
  while (t--)
  {
    int n, k;
    std::cin >> n >> k;
    int peaks = (n - 1) / 2;
    if (k > peaks)
    {
      std::cout << -1 << '\n';
      continue;
    }
    std::cout << 1 << ' ';
    int itr;
    for (itr = 3; k; itr += 2, k--)
    {
      std::cout << itr << ' ' << itr - 1 << ' ';
    }
    for (--itr; itr <= n; itr++)
    {
      std::cout << itr << ' ';
    }
    std::cout << '\n';
  }
  return 0;
}
/*
  1 3 2 5 4 7 6 8 (8 -> 3)
  1 3 2 5 4 (5 -> 2)
  1 3 2 4 (4 -> 1)
*/