#include <iostream>
#include <vector>

int main(void)
{
  int tt;
  std::cin >> tt;

  while (tt--)
  {
    std::vector<std::vector<int>> v(10, std::vector<int>(10, 0));

    for (int i = 0; i < 10; i++)
    {
      for (int j = i; j < 10 - i; j++)
      {
        v[i][j] = i + 1;
        v[10 - i - 1][j] = i + 1;
      }
    }

    for (int i = 1; i <= 4; i++)
    {
      for (int j = 0; j < i; j++)
      {
        v[i][j] = j + 1;
        v[10 - i - 1][j] = j + 1;
      }
    }
    for (int i = 1; i <= 4; i++)
    {
      for (int j = 9; j >= 10 - i; j--)
      {
        v[i][j] = v[i][10 - j - 1];
        v[10 - i - 1][j] = v[i][10 - j - 1];
      }
    }

    int ans = 0;
    for (int i = 0; i < 10; i++)
    {
      for (int j = 0; j < 10; j++)
      {
        char c; std::cin >> c;
        if (c != '.')
          ans += v[i][j];
      }
    }

    std::cout << ans << "\n";
  }
  return 0;
}