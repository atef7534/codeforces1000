#include <iostream>
#include <cmath>

int main(void)
{
  int tt;
  std::cin >> tt;

  while (tt--)
  {
    int n, c = 0;
    std::cin >> n;

    std::string s = "##";
    for (int i = 1; i <= n; i++)
    {
      s = (i & 1) ? "##" : "..";
      for (int j = 1; j <= 2; j++)
      {
        std::string t = s;
        std::cout << s;
        for (int k = 2; k <= n; k++)
        {
          if (!t.compare("##")) t = "..";
          else t = "##";
          std::cout << t;
        }
        std::cout << "\n";
      }
    }
  }
  return 0;
}