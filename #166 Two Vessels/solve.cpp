#include <iostream>
#include <string>

int main(void)
{
  int tt;
  std::cin >> tt;

  while (tt--)
  {
    int a, b, c, ans;
    std::cin >> a >> b >> c;

    ans = (abs(b - a) + 1) / 2;
    std::cout << ans / c + (!(ans % c == 0)) << "\n";
  }
  return 0;
}