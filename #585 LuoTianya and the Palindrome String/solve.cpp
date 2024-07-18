/*
  author: atef_ai
  created: 17 Jul 2024
  problem: LuoTianya and the Palindrome String
*/
#include <iostream>
#include <string>
int main(void)
{
  int tests;
  std::cin >> tests;
  while (tests--)
  {
    std::string str;
    std::cin >> str;
    int cnt = 0, itr;
    for (itr = 0; str[itr] != '\0'; itr++)
    {
      cnt += (str[itr] == str[0]);
    }
    std::cout << (cnt == itr ? -1 : --itr) << '\n';
  }
  return 0;
}