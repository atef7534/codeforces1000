#include <iostream>

int main(void)
{
  int tt;
  std::cin >> tt;

  while (tt--)
  {
    int a, b, c;
    std::cin >> a >> b >> c;

    if (b > c)
    {
      if (b < a)
        std::cout << "2\n";
      else if (a < b)
        std::cout << "1\n";
      else
        std::cout << "3\n";
    }
    else
    {
      if (a < (2 * c - b))
        std::cout << "1\n";
      else if (a > (2 * c - b))
        std::cout << "2\n";
      else
        std::cout << "3\n";
    }
  }
  return 0;
}
