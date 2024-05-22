#include <iostream>
#include <string>

int main(void)
{
  int tests; 
  std::cin >> tests;

  while (tests--)
  {
    std::string ans = "";
    for (int i = 0; i < 8; i++)
    {
      std::string s;
      std::cin >> s;

      for (auto &i: s)
      {
        if (i != '.')
        {
          ans += i;
        }
      }
    }
    std::cout << ans << "\n";
  }
  return 0;
}