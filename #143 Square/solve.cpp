#include <iostream>

int main(void)
{
  int tt;
  std::cin >> tt;

  while (tt--)
  {
    int x, y, area; std::cin >> x >> y;
    for (int i = 1; i < 4; i++)
    {
      int a, b;
      std::cin >> a >> b;
      if (a == x)
        area = abs(y - b);
    }

    std::cout << area * area << "\n";
  }

  return 0;
}