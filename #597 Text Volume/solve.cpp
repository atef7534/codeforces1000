/*
  author: atef_ai
  created: 18 Jul 2024
  problem: Text Volume
*/
#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
int main(void)
{
  int n, ans = 0, tmp = 0;
  std::cin >> n;
  std::cin.ignore();
  std::string s;
  std::getline(std::cin, s);
  for (int itr = 0; itr < n; itr++)
  {
    if (s[itr] == ' ')
    {
      ans = std::max(ans, tmp);
      tmp = 0;
    }
    else
    {
      tmp += std::isupper(s[itr]) ? 1 : 0;
    }
  }
  std::cout << std::max(ans, tmp) << '\n';
  return 0;
}