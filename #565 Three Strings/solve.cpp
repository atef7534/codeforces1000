/*
  author: atef_ai
  date: 15 Jul 2024
  problem: Three Strings
*/
#include <iostream>
#include <string>
#include <vector>
int main(void)
{
  int tests;
  std::cin >> tests;
  while (tests--)
  {
    std::string a, b, c;
    std::cin >> a >> b >> c;
    bool valid = true;
    for (int itr = 0; itr < (int)a.size(); itr++)
    {
      if (a[itr] != b[itr])
      {
        valid &= (a[itr] == c[itr] || c[itr] == b[itr]);
      }
      else if (a[itr] == b[itr])
      {
        valid &= (c[itr] == b[itr]);
      }
    }
    std::cout << (valid ? "YES\n" : "NO\n");
  }
  return 0;
}
