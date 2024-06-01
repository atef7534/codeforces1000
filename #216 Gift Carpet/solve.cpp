#include <iostream>
#include <vector>
#include <string>

int main(void)
{
  int t;
  std::cin >> t;

  while (t--)
  {
    int r, c, i, j, t = 0;
    std::cin >> r >> c;

    std::vector<std::vector<char>> a(r, std::vector<char>(c, '\0'));
    for (i = 0; i < r; i++)
      for (j = 0; j < c; j++)
        std::cin >> a[i][j];
    
    bool yes = false;
    std::string s = "", vika = "vika";

    for (i = 0; i < c; i++)
    {
      for (j = 0; j < r; j++)
      {
        yes |= (t >= 4);
        if (t >= 4) break;

        if (vika[t] == a[j][i])
        {
          t++;
          break;
        }
      }
    }
    yes |= (t >= 4);
    std::cout << (yes ? "YES\n" : "NO\n");
  }
  return 0;
}