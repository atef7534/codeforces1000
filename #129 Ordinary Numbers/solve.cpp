#include <iostream>


int main(void)
{
  int tests;
  std::cin >> tests;

  while (tests--)
  {
    int n;
    std::cin >> n;

    if (n <= 9)
    {
      std::cout << n << "\n";
      continue;
    }

    int r = 9, s = 10;
    while (s * 10 <= n)
    {
      r += 9;
      s *= 10;
    }

    r += (n / s);
    
    int x = (n / s);
    while (x < s)
    {
      x = x * 10 + x % 10;
    }
    if (x > n) 
    {
      r--;
    }
    std::cout << r << "\n";
  }
  return 0;
}