#include <iostream>

int main(void)
{
  int tt;
  std::cin >> tt;

  while (tt--)
  {
    int n, s = 0;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
      int x; std::cin >> x;
      s += x;
    }
    if (s < n)
      std::cout << "1\n";
    else
      std::cout << s - n << "\n";
  }
  return 0;
}