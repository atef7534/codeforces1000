#include <iostream>
#include <string>
#include <vector>

int main(void)
{
  int tt; std::cin >> tt;
  
  while (tt--)
  {
    std::vector<std::string> a;
    for (int i = 0; i < 8; i++)
    {
      std::string s; std::cin >> s;
      a.push_back(s);
    }
    
    int i, j, x = 0;
    for (i = 1; i < 7; i++)
    {
      for (j = 1; j < 7; j++)
      {
        if (
            a[i][j] == '#' 
            && a[i - 1][j - 1] == '#' 
            && a[i - 1][j + 1] == '#' 
            && a[i + 1][j - 1] == '#' 
            && a[i + 1][j + 1] == '#'
            ) 
            {
              x = 1;
              break;
            }
      }
      if (x) break;
    }
    std::cout << i + 1 << " " << j + 1 << "\n";
  }
  return 0;
}