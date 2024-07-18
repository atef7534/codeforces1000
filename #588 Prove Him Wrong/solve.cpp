/*
  author: atef_ai
  created: 17 Jul 2024
  problem: Prove Him Wrong
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
    if (n <= 19)
    {
      std::cout << "YES\n";
      for (int itr = 1; n; n--, itr *= 3)
      {
        std::cout << itr << ' ';
      }
      std::cout << '\n';
      continue;
    }
    std::cout << "NO\n";
  }
  return 0;
}