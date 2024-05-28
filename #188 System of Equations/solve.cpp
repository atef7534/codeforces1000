#include <iostream>

int main(void)
{
  int tt = 1;

  while (tt--)
  {
    int n, m, c = 0;
    std::cin >> n >> m;

    for (int i = 0; i <= 1000; i++)
    {
      for (int j = 0; j <= 1000; j++)
      {
        if (i * i + j == n && i + j * j == m)
          ++c;
      }
    }

    std::cout << c << "\n";
  }
  return 0;
}