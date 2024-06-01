#include <iostream>

int main(void)
{
  int t;
  std::cin >> t;

  while (t--)
  {
    int n;
    std::cin >> n;
    std::cout << n / 2 << " " << (n & 1 ? n - 1 : n) << "\n";
  }
  return 0;
}