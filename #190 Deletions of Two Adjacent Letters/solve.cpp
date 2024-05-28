#include <iostream>

int main(void)
{
  int tt = 1;
  std::cin >> tt;

  while (tt--)
  {
    std::string s; std::cin >> s;
    char c; std::cin >> c;

    if (int(s.size()) == 1)
    {
      (s[0] != c) ? std::cout << "NO\n" : std::cout << "YES\n";
      continue;
    }

    int index = -1, i;
    for (i = 0 ; s[i] != '\0'; i++)
    {
      if (c == s[i])
      {
        if (index == -1) index = i;
        else if (index & 1 && !(i & 1)) index = i;
      }
    }

    (i & 1 && !(index & 1)) ? std::cout << "YES\n" : std::cout << "NO\n"; 
  } 
  return 0;
}