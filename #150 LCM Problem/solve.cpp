#include <iostream>

int main(void)
{
  int tt;
  std::cin >> tt;
  
  while (tt--)
  {
    int l, r;
    std::cin >> l >> r;

    if (2 * l <= r)
      std::cout << l << " " << 2 * l << "\n";
    else
      std::cout << "-1 -1\n";
  }
  return 0;
}