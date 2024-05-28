#include <iostream>

int main(void)
{
  int tt = 1;
  std::cin >> tt;

  while (tt--)
  {
    int n, t = 1; std::cin >> n;
    while (t * 10 <= n)
      t *= 10;
    std::cout << n - t << "\n";
  } 
  return 0;
}