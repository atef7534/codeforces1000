#include <iostream>
#include <string>

int main(void)
{
  int n;
  std::cin >> n;

  std::string s;
  std::cin >> s;

  int ans = 0, c = 0;
  for (int i = 0; s[i] != '\0'; i++)
  {
    if (s[i] != 'x')
    {
      ans += std::max(0, c - 2);
      c = 0;
    }
    else
      c++;
  }

  ans += std::max(0, c - 2);
  std::cout << ans << "\n";

  return 0;
}