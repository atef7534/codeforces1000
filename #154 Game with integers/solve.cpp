#include <iostream>

int main(void)
{
  int tt;
  std::cin >> tt;

  while (tt--)
  {
    int n;
    std::cin >> n;
    (n % 3) ? std::cout << "First\n" : std::cout << "Second\n";
  }
  return 0;
}
