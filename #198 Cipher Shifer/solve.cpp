#include <iostream>
#include <string>

int main(void)
{
  int tt; std::cin >> tt;
  
  while (tt--)
  {
    int n, i; std::cin >> n;
    char l = '\0';
    std::string ans = "";

    for (i = 0; i < n; i++)
    {
      char c; std::cin >> c;
      if (l == '\0') l = c;
      else
      {
        if (l == c)
        {
          ans += l;
          l = '\0';
        }
      }
    }
    std::cout << ans << "\n";
  }
}