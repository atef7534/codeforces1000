#include <iostream>
#include <string>

int main(void)
{
  int tt;
  std::cin >> tt;

  while (tt--)
  {
    int n;
    std::cin >> n;

    std::string s;
    std::cin >> s;

    if (n <= 2)
    {
      if (n == 1)
        std::cout << "YES\n";
      else
        (s[0] != s[1]) ? std::cout << "YES\n" : std::cout << "NO\n";
    }
    else
      std::cout << "NO\n";
  }
  return 0;
  
}