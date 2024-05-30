#include <iostream>

int main(void)
{
  int tt; std::cin >> tt;
  
  while (tt--)
  {
    int n; std::cin >> n;
    std::cout << ((n + 1) / 10) << "\n";
  }
  return 0;
}