#include <iostream>
#include <string>

int main(void)
{
  int tt;
  std::cin >> tt;

  while (tt--)
  {
    int a, b, n;
    std::cin >> a >> b >> n;

    int c = 0;
    while (a <= n && b <= n)
    {
      if (a > b)
        b += a;
      else
        a += b;
      c++;
    }
    std::cout << c << "\n";
  }

  return 0;
  
}