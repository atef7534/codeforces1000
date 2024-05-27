#include <iostream>
#include <algorithm>
#include <vector>

int main(void)
{
  int tt;
  std::cin >> tt;

  while (tt--)
  {
    int a, b, c;
    std::cin >> a >> b >> c;

    if (a > b) std::swap(a, b);

    if (b - a < a || c > 2 * (b - a)) std::cout << "-1\n";
    else {
      if (c > b - a) std::cout << c - b + a << "\n";
      else std::cout << c + b - a << "\n";
    }
  }
  return 0;
}