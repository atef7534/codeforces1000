#include <iostream>

int main(void)
{
  int t;
  std::cin >> t;

  while (t--)
  {
    int n, x;
    std::cin >> n;

    for (int i = 0; i < n; i++)
      std::cin >> x;
    
    n = 9 - n;
    std::cout << 1LL * (n * (n + 1) / 2) * 6 << "\n";
  }
  return 0;
}
