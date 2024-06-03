#include <iostream>
#include <string>
#include <cmath>

int main(void)
{
  int t;
  std::cin >> t;

  while (t--)
  {
    long long n, num = 2050 * 1e14, ans = 0;
    std::cin >> n;

    while (num >= 2050)
    {
      while (n >= num)
      {
        ans++;
        n -= num;
      }
      num /= 10;
    }
    std::cout << (n ? -1 : ans) << "\n";
  }
  return 0;
}
