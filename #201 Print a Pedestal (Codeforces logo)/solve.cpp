#include <iostream>

int main(void)
{
  int tt; std::cin >> tt;
  
  while (tt--)
  {
    int n; std::cin >> n;
    if ((n % 3))
    {
      if (n % 3 == 1)
        std::cout << n / 3 << " " << n / 3 + 2 << " " << n / 3 - 1 << "\n";
      else
        std::cout << n / 3 + 1 << " " << n / 3 + 2 << " " << n / 3 - 1 << "\n";
    }
    else
      std::cout << n / 3 << " " << n / 3 + 1 << " " << n / 3 - 1 << "\n";
  }
  return 0;
}