#include <iostream>

int main(void)
{
  int tt;
  std::cin >> tt;

  while (tt--)
  {
    int a, b;
    std::cin >> a >> b;

    if (a == 0)
      std::cout << "1\n";
    else
      std::cout << (a + 2 * b) + 1 << "\n";
  }
  return 0;
}