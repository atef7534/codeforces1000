#include <iostream>

int main(void)
{
  int tt;
  std::cin >> tt;

  while (tt--)
  {
    int n, m;
    std::cin >> n >> m;

    std::cout << (n * m) / 2 + ((n * m) & 1) << "\n";
  }
  return 0;
}