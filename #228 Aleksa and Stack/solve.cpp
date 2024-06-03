#include <iostream>

int main(void)
{
  int t;
  std::cin >> t;

  while (t--)
  {
    int n, _;
    std::cin >> n;

    for (_ = 1; n; n--, _ += 2)
      std::cout << _ << " ";
    std::cout << "\n";
  }
  return 0;
}
