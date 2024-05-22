#include <iostream>

int main(void)
{
  int tests;
  std::cin >> tests;

  while (tests--)
  {
    int w, h, n;
    std::cin >> w >> h >> n;

    int r = 1;
    while (!(w & 1) || !(h & 1))
    {
      r <<= (!(w & 1));
      r <<= (!(h & 1));
      h = (!(h & 1)) ? h / 2 : h;
      w = (!(w & 1)) ? w / 2 : w;
    }
    
    (r >= n) ? std::cout << "yEs\n" : std::cout << "No\n";
  }
  return 0;
}