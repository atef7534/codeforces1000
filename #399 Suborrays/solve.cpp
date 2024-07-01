#include <iostream>

int main(void)
{
  int tests;
  std::cin >> tests;

  while (tests--)
  {
    int n;
    std::cin >> n;
    for (int itr = 1; itr <= n; itr++)
      std::cout << itr << ' ';
    std::cout << '\n';
  }
  return 0;
}

