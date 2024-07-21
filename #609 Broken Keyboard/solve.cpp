/*
  author: atef_ai
  created: 19 Jul 2024
  problem: Broken Keyboard
*/
#include <iostream>
#include <string>
int main(void)
{
  int t;
  std::cin >> t;
  while (t--)
  {
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    s += s.back();
    bool valid = true;
    for (int itr = 0; itr < n; itr++)
    {
      if (!(itr % 3 - 1))
      {
        valid &= (s[itr] == s[itr + 1] && itr + 1 != n);
      }
    }
    std::cout << (valid ? "YES\n" : "NO\n");
    }
  return 0;
}