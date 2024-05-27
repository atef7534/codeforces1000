#include <iostream>

int main(void)
{
  int tt;
  std::cin >> tt;

  while (tt--)
  {
    int n;
    std::cin >> n;

    (n % 4) ? std::cout << "YES\n" : std::cout << "NO\n";
  }
  return 0;
}