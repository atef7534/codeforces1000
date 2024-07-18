/*
  author: atef_ai
  created: 17 Jul 2024
  problem: Matching
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
int main(void)
{
  int tests;
  std::cin >> tests;
  while (tests--)
  {
    std::string mystr;
    std::cin >> mystr;
    int cnt = std::count(mystr.begin(), mystr.end(), '?');
    if (mystr[0] == '0')
    {
      std::cout << "0\n";
      continue;
    }
    if (mystr[0] == '?')
    {
      std::cout << std::pow(10, cnt - 1) * 9 << '\n';
    }
    else
    {
      std::cout << std::pow(10, cnt) << '\n';
    }
  }
  return 0;
}