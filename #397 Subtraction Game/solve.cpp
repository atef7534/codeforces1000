#include <iostream>

int main(void)
{
  int tests;
  std::cin >> tests;

  while (tests--)
  {
    int a, b;
    std::cin >> a >> b;
    std::cout << a + b << '\n';
  }
  return 0;
}

