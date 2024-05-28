#include <iostream>

int main(void)
{
  int tt = 1;
  std::cin >> tt;

  while (tt--)
  {
    int n;
    std::cin >> n;

    if (n <= 26) std::cout << "aa" << char(n - 3 + 'a') << "\n";
    else if (n <= 52)
    {
      std::string s = "a";
      if (n - 1 == 26)
        s += "a";
      else
        s += char('a' + (n - 1) % 26 - 1);
      
      n -= (1 + int(s[1] - 'a' + 1));
      s += char('a' + n - 1);
      std::cout << s << "\n";
    }
    else 
    {
      if (n == 78) std::cout << "zzz\n";
      else std::cout << char(n % 26 - 1 + 'a') << "zz" << "\n";
    }
  } 
  return 0;
}