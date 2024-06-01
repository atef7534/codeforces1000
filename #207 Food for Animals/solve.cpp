#include <iostream>
#include <string>

int main(void)
{
  int tt; std::cin >> tt;
  
  while (tt--)
  {
    int a, b, c, x, y;
    std::cin >> a >> b >> c >> x >> y;

    bool yes = true;
    if (a < x)
    {
      if (c < x - a)
        yes = false;
      else
        c -= x - a;
    }

    if (b < y)
    {
      if (c < y - b)
        yes = false;
      else
        c -= y - b;
    }

    std::cout << (yes ? "YES\n" : "NO\n");
  }
  return 0;
}