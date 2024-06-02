#include <iostream>

int main(void)
{
  int t;
  std::cin >> t;

  while (t--)
  {
    int s, t = 9, ans = 0, x = 1;
    std::cin >> s;

    for (int i = 9; i >= 1; i--)
    {
      if (i > s)
        break;
      ans += i * x;
      s -= i;
      x *= 10;
    }
    ans += s * x;
    std::cout << ans << "\n";
  }
  return 0;
}