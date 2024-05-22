#include <iostream>

int main(void)
{
  int tt;
  std::cin >> tt;

  while (tt--)
  {
    int n;
    std::cin >> n;

    for (int i = 2; i <= n; i++)
      std::cout << i << " ";
    std::cout << "1\n";
  }

  return 0;
}