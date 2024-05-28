#include <iostream>
#include <string>

int main(void)
{
  int tt = 1;
  std::cin >> tt;

  while (tt--)
  {
    int n, k, c = 0;
    std::cin >> n >> k;

    std::string s; std::cin >> s;
    for (int i = 0; i < n; i++)
    {
      if (s[i] == 'B')
      {
        i += k - 1;
        ++c;
      }
    }
    std::cout << c << "\n";
  } 
  return 0;
}