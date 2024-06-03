#include <iostream>
#include <string>
#include <map>

int main(void)
{
  int t;
  std::cin >> t;

  while (t--)
  {
    std::string s1, s2;
    std::cin >> s1 >> s2;

    if (!s1.compare(s2))
      std::cout << "=\n";
    else 
    {
      std::map<char, int> f;
      f['S'] = -1;
      f['M'] = 1;
      f['L'] = 2;
      f['X'] = 1;

      int sum1 = 1, sum2 = 1;
      for (int i = 0; s1[i + 1] != '\0'; i++)
        sum1 += f[s1[i]];
        
      for (int i = 0; s2[i + 1] != '\0'; i++)
        sum2 += f[s2[i]];
      
      if (f[s1.back()] * sum1 > f[s2.back()] * sum2)
        std::cout << ">\n";
      else
        std::cout << "<\n";
    }
  }
  return 0;
}
