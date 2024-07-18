/*
  author: atef_ai
  date: 15 Jul 2024
  problem: Buy the String
*/
#include <iostream>
#include <string>
int main(void)
{
  int tests;
  std::cin >> tests;
  while (tests--)
  {
    int size, c0, c1, h;
    std::cin >> size >> c0 >> c1 >> h;
    std::string s;
    std::cin >> s;
    int total = 0;
    for (int itr = 0; itr < size; itr++)
    {
      if (s[itr] == '1')
      {
        total += std::min(h + c0, c1);
      }
      else
      {
        total += std::min(h + c1, c0);
      }
    }
    std::cout << total << '\n';
  }
  return 0;
}
