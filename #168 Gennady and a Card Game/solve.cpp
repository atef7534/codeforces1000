#include <iostream>
#include <string>

int main(void)
{
  std::string s;
  std::cin >> s;

  bool ok = 0;

  for (int i = 0; i < 5; i++)
  {
    std::string t;
    std::cin >> t;

    ok |= (t[0] == s[0] || t[1] == s[1]);
  }
  (ok) ? std::cout << "YES\n" : std::cout << "NO\n";
  return 0;
}