#include <iostream>

int main(void)
{
  int tests;
  std::cin >> tests;

  while (tests--)
  {
    long long n, s;
    std::cin >> n >> s;
    n *= n;
    std::cout << (s / n) << '\n';
  }
  return 0;
}

