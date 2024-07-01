#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

int main(void)
{
  int tests;
  std::cin >> tests;

  while (tests--)
  {
    int x, y; // positions
    std::cin >> x >> y;

    // special case
    if (!x && !y)
    {
      std::cout << "0\n";
      continue;
    }
    int squareRoot = (x * x) + (y * y);
    if (std::ceil(std::sqrt(1.0 * squareRoot)) != std::sqrt(1.0 * squareRoot))
    {
      std::cout << "2\n";
    }
    else
    {
      std::cout << "1\n";
    }
  }
  return 0;
}

