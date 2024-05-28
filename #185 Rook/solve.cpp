#include <iostream>

int main(void)
{
  int tt;
  std::cin >> tt;

  while (tt--)
  {
    char c;
    int x;
    std::cin >> c >> x;

    for (int i = 1; i <= 8; i++)
    {
      if (i == x)
        continue;
      std::cout << c << i << "\n";
    }
    for (int i = 0; i <= int('h' - 'a'); i++)
    {
      if (char(i + 'a') == c)
        continue;
      std::cout << char(i + 'a') << x << "\n";
    }
  }
  return 0;
}