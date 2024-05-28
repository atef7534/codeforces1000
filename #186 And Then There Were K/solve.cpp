#include <iostream>
#include <cmath>

int main(void)
{
  int tt;
  std::cin >> tt;

  while (tt--)
  {
    int n;
    std::cin >> n;
    std::cout << (1 << int(std::log2(n))) - 1 << "\n";
  }
  return 0;
}