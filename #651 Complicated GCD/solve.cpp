/**
 * author: atef_ai
 * created: 24 Jul
 */
#include <iostream>
#include <algorithm>
#include <string>
int main(void)
{
  std::string s1, s2;
  std::cin >> s1 >> s2;
  std::cout << (!s1.compare(s2) ? s1 : "1") << '\n';
  return 0;
}