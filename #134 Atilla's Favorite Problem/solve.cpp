#include <iostream>

int main(void)
{
  int tt;
  std::cin >> tt;

  while (tt--)
  {
    int n;
    std::cin >> n;

    char x = 'a';
    for (int i = 0; i < n; i++)
    {
      char c;
      std::cin >> c;

      x = std::max(x, c);
    }

    std::cout << (int) (x - 'a') + 1 << "\n";
  }
  return 0;
}