#include <iostream>
#include <string>

int main(void)
{
  int tt; std::cin >> tt;
  
  while (tt--)
  {
    int n, 
        c = 0, 
        i, 
        ou = 0, 
        od = 0; 
    std::cin >> n;

    std::string s1, 
                s2;

    std::cin >> s1 >> s2;
    
    for (i = 0; i < n; i++)
    {
      if (s1[i] != s2[i])
      {
        ou += (s1[i] == '1');
        od += (s2[i] == '1');
      }
    }
    std::cout << std::min(ou, od) + abs(od - ou) << "\n";
  }
  return 0;
}