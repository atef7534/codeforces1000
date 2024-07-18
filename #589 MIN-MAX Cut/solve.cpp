/*
  author: atef_ai
  created: 17 Jul 2024
  problem: MIN-MEX Cut
*/
#include <iostream>
#include <vector>
#include <string>
int main(void)
{
  int t;
  std::cin >> t;
  while (t--)
  {
    std::string s, tmp = "";
    std::cin >> s;
    int c = 0;
    for (int itr = 0; s[itr] != '\0'; itr++)
    {
      if (tmp.empty())
      {
        tmp += s[itr];
        continue;
      }
      if (tmp.back() != s[itr])
      {
        if (!(int(tmp.back() - '0')))
        {
          ++c;
        }
        tmp.clear();
      }
      tmp += s[itr];
    }
    if (!(int(tmp.back() - '0')))
    {
      ++c;
    }
    std::cout << std::min(2, c) << '\n';
  }
  return 0;
}