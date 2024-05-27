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

    a += (c + 1) / 2;
    b += c / 2;

    (a > b) ? std::cout << "First\n" : std::cout << "Second\n";
  }
  return 0;
}