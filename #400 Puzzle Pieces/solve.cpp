#include <iostream>

int main(void)
{
  int tests;
  std::cin >> tests;

  while (tests--)
  {
    int n, m;
    std::cin >> n >> m;
    std::cout << (n + m <= 4 ? "YES\n" : "NO\n");
  }
  return 0;
}

