/*
  author: atef_ai
  created: 17 Jul 2024
  problem: Gardener and the Capybaras (easy version)
*/
#include <iostream>
#include <string>
int main(void)
{
  int t;
  std::cin >> t;
  while (t--)
  {
    std::string str;
    std::cin >> str;
    int mx = 1, mn = 1, size = (int)str.size(), itr;
    for (itr = 1; itr + 1 < size; itr++)
    {
      if (str[mx] < str[itr])
      {
        mx = itr;
      }
      if (str[mn] > str[itr])
      {
        mn = itr;
      }
    }
    if (str[size - 1] >= str[mn] && str[0] >= str[mn])
    {
      std::cout << str.substr(0, mn) << ' ' << str.substr(mn, 1) << ' ' << str.substr(mn + 1) << '\n';
      continue;
    }
    if (str[size - 1] <= str[mx] && str[0] <= str[mx])
    {
      std::cout << str.substr(0, mx) << ' ' << str.substr(mx, 1);
      for (itr = mx + 1; str[itr] == str[mx] && itr + 1 < size; itr++)
      {
        std::cout << str[itr];
      }
      std::cout << ' ' << str.substr(itr) << '\n';
      continue;
    }
    std::cout << ":(\n";
  }
  return 0;
}