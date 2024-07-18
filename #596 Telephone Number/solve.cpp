/*
  author: atef_ai
  created: 18 Jul 2024
  problem: Telephone Number
*/
#include <iostream>
#include <string>
int main(void)
{
  int t;
  std::cin >> t;
  while (t--)
  {
    int n, itr = 0;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    for (itr = 0; itr < n && s[itr] != '8'; itr++);
    std::cout << (n - itr >= 11 ? "YES\n" : "NO\n");
  }
  return 0;
}