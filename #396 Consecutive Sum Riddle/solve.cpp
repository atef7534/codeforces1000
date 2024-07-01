#include <iostream>

int main(void)
{
  int tests;
  std::cin >> tests;

  while (tests--)
  {
    long long n;
    std::cin >> n;
    std::cout << -1 * (n - 1) << " " << n << '\n';
  }
  return 0;
}

