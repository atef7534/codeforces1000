/*
  author: atef_ai
  created: 19 Jul 2024
  problem: Two Subsequences
*/
#include <iostream>
#include <string>
int main(void)
{
  int t;
  std::cin >> t;
  while (t--)
  {
    std::string s;
    std::cin >> s;
    int idx = 0;
    for (int itr = 0; s[itr] != '\0'; itr++)
    {
      if (s[idx] > s[itr])
      {
        idx = itr;
      }
    }
    std::cout << s[idx] << ' ' << s.substr(0, idx) + s.substr(idx + 1) << '\n';
  }
  return 0;
}