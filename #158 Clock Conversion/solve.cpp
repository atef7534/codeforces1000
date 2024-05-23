#include <iostream>
#include <string>

int main(void)
{
  int tt;
  std::cin >> tt;

  while (tt--)
  {
    int h, m;
    char c;
    std::cin >> h >> c >> m;

    std::string res = "";
    if (h == 0)
    {
      res += "12:";
      if (m <= 9)
        res += "0" + std::to_string(m);
      else
        res += std::to_string(m);
      res += " AM\n";
    }
    else 
    {
      if (h > 12)
      {
        if (h - 12 < 10)
          res += "0";
        res += std::to_string(h - 12);
      }
      else
      {
        if (h < 10)
          res += "0";
        res += std::to_string(h);
      }
      res += ":";
      if (m <= 9)
        res += "0" + std::to_string(m);
      else
        res += std::to_string(m);
      if (h >= 12)
        res += " PM\n";
      else
        res += " AM\n";
    }
    std::cout << res;
  }
  return 0;
}
