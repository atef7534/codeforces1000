#include <iostream>

int main(void)
{
  int tt;
  std::cin >> tt;

  while (tt--)
  {
    int n;
    std::cin >> n;

    if (!(n % 7)) std::cout << n << "\n";
    else 
    {
      int x = n % 10;
      int m = n % 7;
      if (n + (7 - (n % 7)) >= n - x + 10)
        std::cout << n - (n % 7) << "\n";
      else
        std::cout << n + (7 - (n % 7)) << "\n";
    }
  }
  return 0;
}