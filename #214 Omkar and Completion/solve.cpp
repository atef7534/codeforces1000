#include <iostream>

int main(void)
{
  int t;
  std::cin >> t;

  while (t--)
  {
    int n, _;
    std::cin >> n;
    for (_ = 1; _ <= n; _++)
      std::cout << 1 << " ";
    std::cout << "\n";
  }
  return 0;
}