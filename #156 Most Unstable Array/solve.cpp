#include <iostream>
#include <cmath>
#include <vector>

int main(void)
{
  int tt;
  std::cin >> tt;

  while (tt--)
  {
    long long n, m;
    std::cin >> n >> m;

    std::cout << std::min(2LL, (n - 1)) * m << "\n";
  }
  return 0;
}
