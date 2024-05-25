#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main(void)
{
  int tt;
  std::cin >> tt;

  while (tt--)
  {
    std::string s;
    std::cin >> s;

    int a = 0, b = 0, c = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
      a += (s[i] == 'A');
      b += (s[i] == 'B');
      c += (s[i] == 'C');
    }

    (b == a + c) ? std::cout << "YES\n" : std::cout << "NO\n";
  }
  return 0;
}