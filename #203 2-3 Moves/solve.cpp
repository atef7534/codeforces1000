#include <iostream>

int main(void)
{
  int tt; std::cin >> tt;
  
  while (tt--)
  {
    int n; std::cin >> n;
    if (n == 4 || n == 1)
    {
      std::cout << "2\n"; continue;
    }
    if (n % 3 == 1)
      std::cout << (n - 4) / 3 + 2 << "\n";
    else
      std::cout << n / 3 + (!(n % 3) ? 0 : 1) << "\n";
  }
  return 0;
}